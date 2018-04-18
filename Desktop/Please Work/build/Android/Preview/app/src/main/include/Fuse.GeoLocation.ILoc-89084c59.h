// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.GeoLocation/1.8.1/LocationProvider.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace GeoLocation{struct Location;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace GeoLocation{

// internal abstract interface ILocationTracker :7
// {
uInterfaceType* ILocationTracker_typeof();

struct ILocationTracker
{
    void(*fp_GetLastKnownPosition)(uObject*, ::g::Fuse::GeoLocation::Location**);
    void(*fp_GetLocation)(uObject*, ::g::Uno::Threading::Promise*, double*);
    void(*fp_Init)(uObject*, uDelegate*);
    void(*fp_RequestAuthorization)(uObject*, int32_t*);
    void(*fp_StartListening)(uObject*, uDelegate*, uDelegate*, int32_t*, double*);
    void(*fp_StopListening)(uObject*);
    static ::g::Fuse::GeoLocation::Location* GetLastKnownPosition(const uInterface& __this) { ::g::Fuse::GeoLocation::Location* __retval; return __this.VTable<ILocationTracker>()->fp_GetLastKnownPosition(__this, &__retval), __retval; }
    static void GetLocation(const uInterface& __this, ::g::Uno::Threading::Promise* promise, double timeout) { __this.VTable<ILocationTracker>()->fp_GetLocation(__this, promise, &timeout); }
    static void Init(const uInterface& __this, uDelegate* onReady) { __this.VTable<ILocationTracker>()->fp_Init(__this, onReady); }
    static void RequestAuthorization(const uInterface& __this, int32_t type) { __this.VTable<ILocationTracker>()->fp_RequestAuthorization(__this, &type); }
    static void StartListening(const uInterface& __this, uDelegate* onLocationChanged, uDelegate* onLocationError, int32_t minimumReportInterval, double desiredAccuracyInMeters) { __this.VTable<ILocationTracker>()->fp_StartListening(__this, onLocationChanged, onLocationError, &minimumReportInterval, &desiredAccuracyInMeters); }
    static void StopListening(const uInterface& __this) { __this.VTable<ILocationTracker>()->fp_StopListening(__this); }
};
// }

}}} // ::g::Fuse::GeoLocation
