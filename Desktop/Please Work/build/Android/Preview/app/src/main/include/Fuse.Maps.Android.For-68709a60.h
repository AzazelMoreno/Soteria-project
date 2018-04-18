// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.Maps/1.8.1/Android/ForeignHelpers.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Maps{namespace Android{struct ForeignHelpers;}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Maps{
namespace Android{

// internal static extern class ForeignHelpers :10
// {
uClassType* ForeignHelpers_typeof();
void ForeignHelpers__AddMarker_fn(::g::Java::Object* handle, double* lat, double* lng, uString* label, uString* iconPath, float* iconAnchorX, float* iconAnchorY, int32_t* uid, uString** __retval);
void ForeignHelpers__Clear_fn(::g::Java::Object* handle);
void ForeignHelpers__Configure_fn(::g::Java::Object* handle);
void ForeignHelpers__ConfigureGestures_fn(::g::Java::Object* handle, bool* zoom, bool* rotate, bool* tilt, bool* scroll);
void ForeignHelpers__ConfigureUI_fn(::g::Java::Object* handle, bool* compass, bool* myLocationButton);
void ForeignHelpers__CreateMap_fn(::g::Java::Object** __retval);
void ForeignHelpers__Destroy_fn(::g::Java::Object* handle);
void ForeignHelpers__GetOrientation_fn(::g::Java::Object* handle, float* __retval);
void ForeignHelpers__GetPositionLat_fn(::g::Java::Object* handle, double* __retval);
void ForeignHelpers__GetPositionLong_fn(::g::Java::Object* handle, double* __retval);
void ForeignHelpers__GetTilt_fn(::g::Java::Object* handle, float* __retval);
void ForeignHelpers__GetZoom_fn(::g::Java::Object* handle, float* __retval);
void ForeignHelpers__MoveCamera_fn(::g::Java::Object* handle, double* lat, double* lng, float* zoom, float* tilt, float* bearing, double* duration);
void ForeignHelpers__SetHybridStyle_fn(::g::Java::Object* handle);
void ForeignHelpers__SetMapEventHandlers_fn(::g::Java::Object* handle, uDelegate* onMapReady, uDelegate* handleLocationLongPress, uDelegate* handleLocationTapped, uDelegate* onAnimationBegin, uDelegate* onAnimationEnd, uDelegate* handleCameraChange, uDelegate* handleMarkerPressed, uDelegate* handleTouchEvent);
void ForeignHelpers__SetMyLocationEnabled_fn(::g::Java::Object* handle, bool* b);
void ForeignHelpers__SetNormalStyle_fn(::g::Java::Object* handle);
void ForeignHelpers__SetPosition_fn(::g::Java::Object* handle, double* lat, double* lng, double* duration);
void ForeignHelpers__SetSatelliteStyle_fn(::g::Java::Object* handle);

struct ForeignHelpers : uObject
{
    static uString* AddMarker(::g::Java::Object* handle, double lat, double lng, uString* label, uString* iconPath, float iconAnchorX, float iconAnchorY, int32_t uid);
    static void Clear(::g::Java::Object* handle);
    static void Configure(::g::Java::Object* handle);
    static void ConfigureGestures(::g::Java::Object* handle, bool zoom, bool rotate, bool tilt, bool scroll);
    static void ConfigureUI(::g::Java::Object* handle, bool compass, bool myLocationButton);
    static ::g::Java::Object* CreateMap();
    static void Destroy(::g::Java::Object* handle);
    static float GetOrientation(::g::Java::Object* handle);
    static double GetPositionLat(::g::Java::Object* handle);
    static double GetPositionLong(::g::Java::Object* handle);
    static float GetTilt(::g::Java::Object* handle);
    static float GetZoom(::g::Java::Object* handle);
    static void MoveCamera(::g::Java::Object* handle, double lat, double lng, float zoom, float tilt, float bearing, double duration);
    static void SetHybridStyle(::g::Java::Object* handle);
    static void SetMapEventHandlers(::g::Java::Object* handle, uDelegate* onMapReady, uDelegate* handleLocationLongPress, uDelegate* handleLocationTapped, uDelegate* onAnimationBegin, uDelegate* onAnimationEnd, uDelegate* handleCameraChange, uDelegate* handleMarkerPressed, uDelegate* handleTouchEvent);
    static void SetMyLocationEnabled(::g::Java::Object* handle, bool b);
    static void SetNormalStyle(::g::Java::Object* handle);
    static void SetPosition(::g::Java::Object* handle, double lat, double lng, double duration);
    static void SetSatelliteStyle(::g::Java::Object* handle);
};
// }

}}}} // ::g::Fuse::Maps::Android
