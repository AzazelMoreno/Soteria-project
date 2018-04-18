// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.GeoLocation/1.8.1/Android/AndroidLocationProvider.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.GeoLocation.ILoc-89084c59.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace GeoLocation{struct AndroidLocationProvider;}}}
namespace g{namespace Fuse{namespace GeoLocation{struct Location;}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{namespace Permissions{struct PlatformPermission;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}
namespace g{namespace Uno{namespace Time{struct Instant;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace GeoLocation{

// internal sealed extern class AndroidLocationProvider :12
// {
struct AndroidLocationProvider_type : uType
{
    ::g::Fuse::GeoLocation::ILocationTracker interface0;
};

AndroidLocationProvider_type* AndroidLocationProvider_typeof();
void AndroidLocationProvider__ctor__fn(AndroidLocationProvider* __this);
void AndroidLocationProvider__ChooseBestLocation_fn(AndroidLocationProvider* __this, uObject* locations, int32_t* minDistance, ::g::Uno::Time::Instant* minTime, ::g::Fuse::GeoLocation::Location** __retval);
void AndroidLocationProvider__GetLastKnownLocationFromProvider_fn(::g::Java::Object* handle, uString* provider, ::g::Java::Object** __retval);
void AndroidLocationProvider__GetLastKnownPosition_fn(AndroidLocationProvider* __this, ::g::Fuse::GeoLocation::Location** __retval);
void AndroidLocationProvider__GetLocation_fn(AndroidLocationProvider* __this, ::g::Uno::Threading::Promise* promise, double* timeout);
void AndroidLocationProvider__GetLocationManager_fn(::g::Java::Object** __retval);
void AndroidLocationProvider__GetNumProviders_fn(::g::Java::Object* handle, int32_t* __retval);
void AndroidLocationProvider__GetUpdateListener_fn(uDelegate* onLocationChanged, ::g::Java::Object** __retval);
void AndroidLocationProvider__Init_fn(AndroidLocationProvider* __this, uDelegate* onReady);
void AndroidLocationProvider__IsGPSEnabled_fn(::g::Java::Object* locationManager, bool* __retval);
void AndroidLocationProvider__IsNetworkEnabled_fn(::g::Java::Object* locationManager, bool* __retval);
void AndroidLocationProvider__ListProviders_fn(::g::Java::Object* handle, uArray* output);
void AndroidLocationProvider__New1_fn(AndroidLocationProvider** __retval);
void AndroidLocationProvider__OnLocationChanged_fn(AndroidLocationProvider* __this, ::g::Java::Object* location);
void AndroidLocationProvider__OnPermissionsError_fn(AndroidLocationProvider* __this, ::g::Uno::Exception* e);
void AndroidLocationProvider__OnPermissionsResult_fn(AndroidLocationProvider* __this, uArray* grantedPermissions);
void AndroidLocationProvider__RemoveUpdates_fn(::g::Java::Object* manager, ::g::Java::Object* listener);
void AndroidLocationProvider__RequestAuthorization_fn(AndroidLocationProvider* __this, int32_t* type);
void AndroidLocationProvider__RequestGPSLocationUpdates_fn(::g::Java::Object* handle, int32_t* minimumReportInterval, double* desiredAccuracyInMeters, ::g::Java::Object* listener);
void AndroidLocationProvider__RequestNetworkLocationUpdates_fn(::g::Java::Object* handle, int32_t* minimumReportInterval, double* desiredAccuracyInMeters, ::g::Java::Object* listener);
void AndroidLocationProvider__StartListening_fn(AndroidLocationProvider* __this, uDelegate* onLocationChanged, uDelegate* onLocationError, int32_t* minimumReportInterval, double* desiredAccuracyInMeters);
void AndroidLocationProvider__StopListening_fn(AndroidLocationProvider* __this);

struct AndroidLocationProvider : uObject
{
    bool _authorized;
    bool _started;
    uStrong<uDelegate*> _onLocationChanged;
    uStrong< ::g::Java::Object*> _locationManager;
    uStrong< ::g::Java::Object*> _updateListener;
    uStrong<uDelegate*> _onReady;

    void ctor_();
    ::g::Fuse::GeoLocation::Location* ChooseBestLocation(uObject* locations, int32_t minDistance, ::g::Uno::Time::Instant minTime);
    ::g::Fuse::GeoLocation::Location* GetLastKnownPosition();
    void GetLocation(::g::Uno::Threading::Promise* promise, double timeout);
    void Init(uDelegate* onReady);
    void OnLocationChanged(::g::Java::Object* location);
    void OnPermissionsError(::g::Uno::Exception* e);
    void OnPermissionsResult(uArray* grantedPermissions);
    void RequestAuthorization(int32_t type);
    void StartListening(uDelegate* onLocationChanged, uDelegate* onLocationError, int32_t minimumReportInterval, double desiredAccuracyInMeters);
    void StopListening();
    static ::g::Java::Object* GetLastKnownLocationFromProvider(::g::Java::Object* handle, uString* provider);
    static ::g::Java::Object* GetLocationManager();
    static int32_t GetNumProviders(::g::Java::Object* handle);
    static ::g::Java::Object* GetUpdateListener(uDelegate* onLocationChanged);
    static bool IsGPSEnabled(::g::Java::Object* locationManager);
    static bool IsNetworkEnabled(::g::Java::Object* locationManager);
    static void ListProviders(::g::Java::Object* handle, uArray* output);
    static AndroidLocationProvider* New1();
    static void RemoveUpdates(::g::Java::Object* manager, ::g::Java::Object* listener);
    static void RequestGPSLocationUpdates(::g::Java::Object* handle, int32_t minimumReportInterval, double desiredAccuracyInMeters, ::g::Java::Object* listener);
    static void RequestNetworkLocationUpdates(::g::Java::Object* handle, int32_t minimumReportInterval, double desiredAccuracyInMeters, ::g::Java::Object* listener);
};
// }

}}} // ::g::Fuse::GeoLocation
