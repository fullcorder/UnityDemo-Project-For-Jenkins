#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Int32>
struct Collection_1_t1982;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t261;
// System.Object
struct Object_t;
// System.Int32[]
struct Int32U5BU5D_t357;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t2205;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t1981;

// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::.ctor()
extern "C" void Collection_1__ctor_m14350_gshared (Collection_1_t1982 * __this, const MethodInfo* method);
#define Collection_1__ctor_m14350(__this, method) (( void (*) (Collection_1_t1982 *, const MethodInfo*))Collection_1__ctor_m14350_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14351_gshared (Collection_1_t1982 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14351(__this, method) (( bool (*) (Collection_1_t1982 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14351_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m14352_gshared (Collection_1_t1982 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m14352(__this, ___array, ___index, method) (( void (*) (Collection_1_t1982 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m14352_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m14353_gshared (Collection_1_t1982 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m14353(__this, method) (( Object_t * (*) (Collection_1_t1982 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m14353_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m14354_gshared (Collection_1_t1982 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m14354(__this, ___value, method) (( int32_t (*) (Collection_1_t1982 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m14354_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m14355_gshared (Collection_1_t1982 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m14355(__this, ___value, method) (( bool (*) (Collection_1_t1982 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m14355_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m14356_gshared (Collection_1_t1982 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m14356(__this, ___value, method) (( int32_t (*) (Collection_1_t1982 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m14356_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m14357_gshared (Collection_1_t1982 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m14357(__this, ___index, ___value, method) (( void (*) (Collection_1_t1982 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m14357_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m14358_gshared (Collection_1_t1982 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m14358(__this, ___value, method) (( void (*) (Collection_1_t1982 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m14358_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m14359_gshared (Collection_1_t1982 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m14359(__this, method) (( bool (*) (Collection_1_t1982 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m14359_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m14360_gshared (Collection_1_t1982 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m14360(__this, method) (( Object_t * (*) (Collection_1_t1982 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m14360_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m14361_gshared (Collection_1_t1982 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m14361(__this, method) (( bool (*) (Collection_1_t1982 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m14361_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m14362_gshared (Collection_1_t1982 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m14362(__this, method) (( bool (*) (Collection_1_t1982 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m14362_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m14363_gshared (Collection_1_t1982 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m14363(__this, ___index, method) (( Object_t * (*) (Collection_1_t1982 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m14363_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m14364_gshared (Collection_1_t1982 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m14364(__this, ___index, ___value, method) (( void (*) (Collection_1_t1982 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m14364_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Add(T)
extern "C" void Collection_1_Add_m14365_gshared (Collection_1_t1982 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_Add_m14365(__this, ___item, method) (( void (*) (Collection_1_t1982 *, int32_t, const MethodInfo*))Collection_1_Add_m14365_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Clear()
extern "C" void Collection_1_Clear_m14366_gshared (Collection_1_t1982 * __this, const MethodInfo* method);
#define Collection_1_Clear_m14366(__this, method) (( void (*) (Collection_1_t1982 *, const MethodInfo*))Collection_1_Clear_m14366_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::ClearItems()
extern "C" void Collection_1_ClearItems_m14367_gshared (Collection_1_t1982 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m14367(__this, method) (( void (*) (Collection_1_t1982 *, const MethodInfo*))Collection_1_ClearItems_m14367_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::Contains(T)
extern "C" bool Collection_1_Contains_m14368_gshared (Collection_1_t1982 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_Contains_m14368(__this, ___item, method) (( bool (*) (Collection_1_t1982 *, int32_t, const MethodInfo*))Collection_1_Contains_m14368_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m14369_gshared (Collection_1_t1982 * __this, Int32U5BU5D_t357* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m14369(__this, ___array, ___index, method) (( void (*) (Collection_1_t1982 *, Int32U5BU5D_t357*, int32_t, const MethodInfo*))Collection_1_CopyTo_m14369_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Int32>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m14370_gshared (Collection_1_t1982 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m14370(__this, method) (( Object_t* (*) (Collection_1_t1982 *, const MethodInfo*))Collection_1_GetEnumerator_m14370_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m14371_gshared (Collection_1_t1982 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m14371(__this, ___item, method) (( int32_t (*) (Collection_1_t1982 *, int32_t, const MethodInfo*))Collection_1_IndexOf_m14371_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m14372_gshared (Collection_1_t1982 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define Collection_1_Insert_m14372(__this, ___index, ___item, method) (( void (*) (Collection_1_t1982 *, int32_t, int32_t, const MethodInfo*))Collection_1_Insert_m14372_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m14373_gshared (Collection_1_t1982 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m14373(__this, ___index, ___item, method) (( void (*) (Collection_1_t1982 *, int32_t, int32_t, const MethodInfo*))Collection_1_InsertItem_m14373_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::Remove(T)
extern "C" bool Collection_1_Remove_m14374_gshared (Collection_1_t1982 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_Remove_m14374(__this, ___item, method) (( bool (*) (Collection_1_t1982 *, int32_t, const MethodInfo*))Collection_1_Remove_m14374_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m14375_gshared (Collection_1_t1982 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m14375(__this, ___index, method) (( void (*) (Collection_1_t1982 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m14375_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m14376_gshared (Collection_1_t1982 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m14376(__this, ___index, method) (( void (*) (Collection_1_t1982 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m14376_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::get_Count()
extern "C" int32_t Collection_1_get_Count_m14377_gshared (Collection_1_t1982 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m14377(__this, method) (( int32_t (*) (Collection_1_t1982 *, const MethodInfo*))Collection_1_get_Count_m14377_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t Collection_1_get_Item_m14378_gshared (Collection_1_t1982 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m14378(__this, ___index, method) (( int32_t (*) (Collection_1_t1982 *, int32_t, const MethodInfo*))Collection_1_get_Item_m14378_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m14379_gshared (Collection_1_t1982 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define Collection_1_set_Item_m14379(__this, ___index, ___value, method) (( void (*) (Collection_1_t1982 *, int32_t, int32_t, const MethodInfo*))Collection_1_set_Item_m14379_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m14380_gshared (Collection_1_t1982 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define Collection_1_SetItem_m14380(__this, ___index, ___item, method) (( void (*) (Collection_1_t1982 *, int32_t, int32_t, const MethodInfo*))Collection_1_SetItem_m14380_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m14381_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m14381(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m14381_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Int32>::ConvertItem(System.Object)
extern "C" int32_t Collection_1_ConvertItem_m14382_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m14382(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m14382_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m14383_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m14383(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m14383_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m14384_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m14384(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m14384_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m14385_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m14385(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m14385_gshared)(__this /* static, unused */, ___list, method)
