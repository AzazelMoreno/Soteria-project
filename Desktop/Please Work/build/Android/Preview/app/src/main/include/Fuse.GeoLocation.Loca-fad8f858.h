// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.GeoLocation/1.8.1/LocationProvider.BufferedCalls.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace GeoLocation{struct Location;}}}
namespace g{namespace Fuse{namespace GeoLocation{struct LocationTracker;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace GeoLocation{

// public partial sealed class LocationTracker :6
// {
uType* LocationTracker_typeof();
void LocationTracker__ctor__fn(LocationTracker* __this);
void LocationTracker__get_AuthorizationType_fn(LocationTracker* __this, int32_t* __retval);
void LocationTracker__set_AuthorizationType_fn(LocationTracker* __this, int32_t* value);
void LocationTracker__FlushBufferedCalls_fn(LocationTracker* __this);
void LocationTracker__GetLocationAsync_fn(LocationTracker* __this, double* timeout, ::g::Uno::Threading::Future1** __retval);
void LocationTracker__Init_fn(LocationTracker* __this);
void LocationTracker__get_Location_fn(LocationTracker* __this, ::g::Fuse::GeoLocation::Location** __retval);
void LocationTracker__add_LocationChanged_fn(LocationTracker* __this, uDelegate* value);
void LocationTracker__remove_LocationChanged_fn(LocationTracker* __this, uDelegate* value);
void LocationTracker__add_LocationError_fn(LocationTracker* __this, uDelegate* value);
void LocationTracker__remove_LocationError_fn(LocationTracker* __this, uDelegate* value);
void LocationTracker__New1_fn(LocationTracker** __retval);
void LocationTracker__OnLocationChanged_fn(LocationTracker* __this, ::g::Fuse::GeoLocation::Location* newLocation);
void LocationTracker__OnLocationError_fn(LocationTracker* __this, ::g::Uno::Exception* error);
void LocationTracker__StartListening_fn(LocationTracker* __this, int32_t* minimumReportInterval, double* desiredAccuracyInMeters);
void LocationTracker__StopListening_fn(LocationTracker* __this);

struct LocationTracker : uObject
{
    static uSStrong<uObject*> _locationTracker_;
    static uSStrong<uObject*>& _locationTracker() { return _locationTracker_; }
    uStrong<uObject*> _bufferedCalls;
    bool _isReady;
    uStrong< ::g::Fuse::GeoLocation::Location*> _lastLocation;
    int32_t _AuthorizationType;
    uStrong<uDelegate*> LocationChanged1;
    uStrong<uDelegate*> LocationError1;

    void ctor_();
    int32_t AuthorizationType();
    void AuthorizationType(int32_t value);
    void FlushBufferedCalls();
    ::g::Uno::Threading::Future1* GetLocationAsync(double timeout);
    void Init();
    ::g::Fuse::GeoLocation::Location* Location();
    void add_LocationChanged(uDelegate* value);
    void remove_LocationChanged(uDelegate* value);
    void add_LocationError(uDelegate* value);
    void remove_LocationError(uDelegate* value);
    void OnLocationChanged(::g::Fuse::GeoLocation::Location* newLocation);
    void OnLocationError(::g::Uno::Exception* error);
    void StartListening(int32_t minimumReportInterval, double desiredAccuracyInMeters);
    void StopListening();
    static LocationTracker* New1();
};
// }

}}} // ::g::Fuse::GeoLocation
