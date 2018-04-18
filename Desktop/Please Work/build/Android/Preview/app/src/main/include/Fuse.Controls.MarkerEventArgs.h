// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.Maps/1.8.1/MapView.Events.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IScriptEvent.h>
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{namespace Controls{struct MarkerEventArgs;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class MarkerEventArgs :9
// {
struct MarkerEventArgs_type : uType
{
    ::g::Fuse::Scripting::IScriptEvent interface0;
};

MarkerEventArgs_type* MarkerEventArgs_typeof();
void MarkerEventArgs__ctor_1_fn(MarkerEventArgs* __this, uString* label);
void MarkerEventArgs__FuseScriptingIScriptEventSerialize_fn(MarkerEventArgs* __this, uObject* s);
void MarkerEventArgs__New2_fn(uString* label, MarkerEventArgs** __retval);

struct MarkerEventArgs : ::g::Uno::EventArgs
{
    uStrong<uString*> Label;

    void ctor_1(uString* label);
    static MarkerEventArgs* New2(uString* label);
};
// }

}}} // ::g::Fuse::Controls
