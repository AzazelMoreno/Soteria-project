// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.GeoLocation/1.8.1/LocationProvider.BufferedCalls.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.GeoLocation.Loca-d6a23e3d.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace GeoLocation{struct LocationTracker__StopListeningCall;}}}

namespace g{
namespace Fuse{
namespace GeoLocation{

// private sealed class LocationTracker.StopListeningCall :31
// {
struct LocationTracker__StopListeningCall_type : uType
{
    ::g::Fuse::GeoLocation::LocationTracker__BufferedCall interface0;
};

LocationTracker__StopListeningCall_type* LocationTracker__StopListeningCall_typeof();
void LocationTracker__StopListeningCall__ctor__fn(LocationTracker__StopListeningCall* __this);
void LocationTracker__StopListeningCall__Apply_fn(LocationTracker__StopListeningCall* __this, uObject* tracker);
void LocationTracker__StopListeningCall__New1_fn(LocationTracker__StopListeningCall** __retval);

struct LocationTracker__StopListeningCall : uObject
{
    void ctor_();
    void Apply(uObject* tracker);
    static LocationTracker__StopListeningCall* New1();
};
// }

}}} // ::g::Fuse::GeoLocation
