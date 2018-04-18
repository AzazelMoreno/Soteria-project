// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.Scripting.JavaScript/1.8.1/V8/Debugger.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// private abstract interface Debugger.State :78
// {
uInterfaceType* Debugger__State_typeof();

struct Debugger__State
{
    void(*fp_Dispose)(uObject*);
    void(*fp_Run)(uObject*, uObject**);
    static void Dispose(const uInterface& __this) { __this.VTable<Debugger__State>()->fp_Dispose(__this); }
    static uObject* Run(const uInterface& __this) { uObject* __retval; return __this.VTable<Debugger__State>()->fp_Run(__this, &__retval), __retval; }
};
// }

}}}} // ::g::Fuse::Scripting::V8
