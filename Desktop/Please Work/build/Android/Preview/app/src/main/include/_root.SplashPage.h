// This file was generated based on 'C:/Users/rudy0/Desktop/Please Work/build/Android/Preview/cache/ux14/SplashPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{struct SplashPage;}

namespace g{

// public partial sealed class SplashPage :2
// {
::g::Fuse::Controls::Panel_type* SplashPage_typeof();
void SplashPage__ctor_8_fn(SplashPage* __this, ::g::Fuse::Navigation::Router* router1);
void SplashPage__InitializeUX_fn(SplashPage* __this);
void SplashPage__New5_fn(::g::Fuse::Navigation::Router* router1, SplashPage** __retval);

struct SplashPage : ::g::Fuse::Controls::Page
{
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return SplashPage_typeof()->Init(), __g_static_nametable1_; }

    void ctor_8(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static SplashPage* New5(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
