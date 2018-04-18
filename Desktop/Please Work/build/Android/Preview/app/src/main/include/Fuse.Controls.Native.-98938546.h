// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.Controls.Native/1.8.1/Android/LeafView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-4da376b6.h>
#include <Fuse.Controls.Native.ILeafView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct LeafView;}}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public abstract extern class LeafView :7
// {
struct LeafView_type : ::g::Fuse::Controls::Native::Android::View_type
{
    ::g::Fuse::Controls::Native::ILeafView interface2;
};

LeafView_type* LeafView_typeof();
void LeafView__ctor_7_fn(LeafView* __this, ::g::Java::Object* handle);
void LeafView__ctor_8_fn(LeafView* __this, ::g::Java::Object* handle, bool* handlesInput);

struct LeafView : ::g::Fuse::Controls::Native::Android::View
{
    void ctor_7(::g::Java::Object* handle);
    void ctor_8(::g::Java::Object* handle, bool handlesInput);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
