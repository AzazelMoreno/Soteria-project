// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.GeoLocation/1.8.1/GeoLocation.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.Native-fa549b97.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace GeoLocation{struct GeoLocation;}}}
namespace g{namespace Fuse{namespace GeoLocation{struct Location;}}}
namespace g{namespace Fuse{namespace GeoLocation{struct LocationTracker;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}

namespace g{
namespace Fuse{
namespace GeoLocation{

// public sealed class GeoLocation :106
// {
::g::Fuse::Scripting::NativeModule_type* GeoLocation_typeof();
void GeoLocation__ctor_3_fn(GeoLocation* __this);
void GeoLocation__AuthorizationRequestConverter_fn(::g::Fuse::Scripting::Context* context, int32_t* type, int32_t* __retval);
void GeoLocation__ChangedArgsFactory_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::GeoLocation::Location* location, uArray** __retval);
void GeoLocation__Converter_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::GeoLocation::Location* location, ::g::Fuse::Scripting::Object** __retval);
void GeoLocation__GetAuthorizationRequest_fn(GeoLocation* __this, int32_t* __retval);
void GeoLocation__GetLocation_fn(GeoLocation* __this, ::g::Fuse::GeoLocation::Location** __retval);
void GeoLocation__GetLocationAsync_fn(GeoLocation* __this, uArray* args, ::g::Uno::Threading::Future1** __retval);
void GeoLocation__LocationChanged_fn(GeoLocation* __this, ::g::Fuse::GeoLocation::Location* location);
void GeoLocation__LocationError_fn(GeoLocation* __this, uString* error);
void GeoLocation__New3_fn(GeoLocation** __retval);
void GeoLocation__SetAuthorizationRequest_fn(GeoLocation* __this, int32_t* value);
void GeoLocation__StartListening_fn(GeoLocation* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void GeoLocation__StopListening_fn(GeoLocation* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);

struct GeoLocation : ::g::Fuse::Scripting::NativeEventEmitterModule
{
    uStrong< ::g::Fuse::GeoLocation::LocationTracker*> _locationTracker;
    static uSStrong<GeoLocation*> _instance_;
    static uSStrong<GeoLocation*>& _instance() { return _instance_; }

    void ctor_3();
    int32_t GetAuthorizationRequest();
    ::g::Fuse::GeoLocation::Location* GetLocation();
    ::g::Uno::Threading::Future1* GetLocationAsync(uArray* args);
    void LocationChanged(::g::Fuse::GeoLocation::Location* location);
    void LocationError(uString* error);
    void SetAuthorizationRequest(int32_t value);
    uObject* StartListening(::g::Fuse::Scripting::Context* c, uArray* args);
    uObject* StopListening(::g::Fuse::Scripting::Context* c, uArray* args);
    static int32_t AuthorizationRequestConverter(::g::Fuse::Scripting::Context* context, int32_t type);
    static uArray* ChangedArgsFactory(::g::Fuse::Scripting::Context* context, ::g::Fuse::GeoLocation::Location* location);
    static ::g::Fuse::Scripting::Object* Converter(::g::Fuse::Scripting::Context* context, ::g::Fuse::GeoLocation::Location* location);
    static GeoLocation* New3();
};
// }

}}} // ::g::Fuse::GeoLocation
