// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.GeoLocation/1.8.1/Android/PromiseListener.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace GeoLocation{struct Location;}}}
namespace g{namespace Fuse{namespace GeoLocation{struct PromiseListener;}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}

namespace g{
namespace Fuse{
namespace GeoLocation{

// internal sealed extern class PromiseListener :8
// {
uType* PromiseListener_typeof();
void PromiseListener__ctor__fn(PromiseListener* __this, ::g::Java::Object* locationManagerHandle, double* timeout, ::g::Uno::Threading::Promise* promise);
void PromiseListener__CreateListener_fn(uDelegate* onLocationChanged, ::g::Java::Object** __retval);
void PromiseListener__New1_fn(::g::Java::Object* locationManagerHandle, double* timeout, ::g::Uno::Threading::Promise* promise, PromiseListener** __retval);
void PromiseListener__OnLocationChanged_fn(PromiseListener* __this, ::g::Java::Object* location);
void PromiseListener__OnTimeout_fn(PromiseListener* __this);
void PromiseListener__StartUpdatesWithTimer_fn(::g::Java::Object* locationManager, ::g::Java::Object* listener, uDelegate* onTimeout, int32_t* timeout);
void PromiseListener__StopUpdate_fn(::g::Java::Object* locationManager, ::g::Java::Object* listener);

struct PromiseListener : uObject
{
    uStrong< ::g::Uno::Threading::Promise*> _promise;
    uStrong< ::g::Java::Object*> _listener;
    uStrong< ::g::Java::Object*> _locationManager;

    void ctor_(::g::Java::Object* locationManagerHandle, double timeout, ::g::Uno::Threading::Promise* promise);
    void OnLocationChanged(::g::Java::Object* location);
    void OnTimeout();
    static ::g::Java::Object* CreateListener(uDelegate* onLocationChanged);
    static PromiseListener* New1(::g::Java::Object* locationManagerHandle, double timeout, ::g::Uno::Threading::Promise* promise);
    static void StartUpdatesWithTimer(::g::Java::Object* locationManager, ::g::Java::Object* listener, uDelegate* onTimeout, int32_t timeout);
    static void StopUpdate(::g::Java::Object* locationManager, ::g::Java::Object* listener);
};
// }

}}} // ::g::Fuse::GeoLocation
