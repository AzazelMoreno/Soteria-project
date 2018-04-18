// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.GeoLocation/1.8.1/LocationProvider.BufferedCalls.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.GeoLocation.Loca-d6a23e3d.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace GeoLocation{struct Location;}}}
namespace g{namespace Fuse{namespace GeoLocation{struct LocationTracker__StartListeningCall;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace GeoLocation{

// private sealed class LocationTracker.StartListeningCall :12
// {
struct LocationTracker__StartListeningCall_type : uType
{
    ::g::Fuse::GeoLocation::LocationTracker__BufferedCall interface0;
};

LocationTracker__StartListeningCall_type* LocationTracker__StartListeningCall_typeof();
void LocationTracker__StartListeningCall__ctor__fn(LocationTracker__StartListeningCall* __this, uDelegate* onLocationChanged1, uDelegate* onLocationError1, int32_t* minimumReportInterval1, double* desiredAccuracyInMeters1);
void LocationTracker__StartListeningCall__Apply_fn(LocationTracker__StartListeningCall* __this, uObject* tracker);
void LocationTracker__StartListeningCall__New1_fn(uDelegate* onLocationChanged1, uDelegate* onLocationError1, int32_t* minimumReportInterval1, double* desiredAccuracyInMeters1, LocationTracker__StartListeningCall** __retval);

struct LocationTracker__StartListeningCall : uObject
{
    int32_t minimumReportInterval;
    double desiredAccuracyInMeters;
    uStrong<uDelegate*> onLocationChanged;
    uStrong<uDelegate*> onLocationError;

    void ctor_(uDelegate* onLocationChanged1, uDelegate* onLocationError1, int32_t minimumReportInterval1, double desiredAccuracyInMeters1);
    void Apply(uObject* tracker);
    static LocationTracker__StartListeningCall* New1(uDelegate* onLocationChanged1, uDelegate* onLocationError1, int32_t minimumReportInterval1, double desiredAccuracyInMeters1);
};
// }

}}} // ::g::Fuse::GeoLocation
