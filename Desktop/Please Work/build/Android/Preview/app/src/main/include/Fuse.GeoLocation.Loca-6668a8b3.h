// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.GeoLocation/1.8.1/LocationProvider.BufferedCalls.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.GeoLocation.Loca-d6a23e3d.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace GeoLocation{struct Location;}}}
namespace g{namespace Fuse{namespace GeoLocation{struct LocationTracker__GetLocationCall;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}

namespace g{
namespace Fuse{
namespace GeoLocation{

// private sealed class LocationTracker.GetLocationCall :42
// {
struct LocationTracker__GetLocationCall_type : uType
{
    ::g::Fuse::GeoLocation::LocationTracker__BufferedCall interface0;
};

LocationTracker__GetLocationCall_type* LocationTracker__GetLocationCall_typeof();
void LocationTracker__GetLocationCall__ctor__fn(LocationTracker__GetLocationCall* __this, ::g::Uno::Threading::Promise* promise1, double* timeout1);
void LocationTracker__GetLocationCall__Apply_fn(LocationTracker__GetLocationCall* __this, uObject* tracker);
void LocationTracker__GetLocationCall__New1_fn(::g::Uno::Threading::Promise* promise1, double* timeout1, LocationTracker__GetLocationCall** __retval);

struct LocationTracker__GetLocationCall : uObject
{
    uStrong< ::g::Uno::Threading::Promise*> promise;
    double timeout;

    void ctor_(::g::Uno::Threading::Promise* promise1, double timeout1);
    void Apply(uObject* tracker);
    static LocationTracker__GetLocationCall* New1(::g::Uno::Threading::Promise* promise1, double timeout1);
};
// }

}}} // ::g::Fuse::GeoLocation
