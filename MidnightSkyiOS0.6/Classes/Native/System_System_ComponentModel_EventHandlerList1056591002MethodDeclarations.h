#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.ComponentModel.EventHandlerList
struct EventHandlerList_t1056591002;
// System.Delegate
struct Delegate_t3310234105;
// System.Object
struct Il2CppObject;
// System.ComponentModel.ListEntry
struct ListEntry_t483724442;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.ComponentModel.EventHandlerList::.ctor()
extern "C"  void EventHandlerList__ctor_m2325431563 (EventHandlerList_t1056591002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.ComponentModel.EventHandlerList::get_Item(System.Object)
extern "C"  Delegate_t3310234105 * EventHandlerList_get_Item_m57190128 (EventHandlerList_t1056591002 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EventHandlerList::Dispose()
extern "C"  void EventHandlerList_Dispose_m1255021192 (EventHandlerList_t1056591002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ListEntry System.ComponentModel.EventHandlerList::FindEntry(System.Object)
extern "C"  ListEntry_t483724442 * EventHandlerList_FindEntry_m3323775348 (EventHandlerList_t1056591002 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
