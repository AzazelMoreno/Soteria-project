// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.Maps/1.8.1/MapView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct MapConfig;}}}

namespace g{
namespace Fuse{
namespace Controls{

// internal sealed class MapConfig :45
// {
uType* MapConfig_typeof();
void MapConfig__ctor__fn(MapConfig* __this);
void MapConfig__get_AllowRotate_fn(MapConfig* __this, bool* __retval);
void MapConfig__set_AllowRotate_fn(MapConfig* __this, bool* value);
void MapConfig__get_AllowScroll_fn(MapConfig* __this, bool* __retval);
void MapConfig__set_AllowScroll_fn(MapConfig* __this, bool* value);
void MapConfig__get_AllowTilt_fn(MapConfig* __this, bool* __retval);
void MapConfig__set_AllowTilt_fn(MapConfig* __this, bool* value);
void MapConfig__get_AllowZoom_fn(MapConfig* __this, bool* __retval);
void MapConfig__set_AllowZoom_fn(MapConfig* __this, bool* value);
void MapConfig__Apply_fn(MapConfig* __this, uObject* mv);
void MapConfig__CopyFrom_fn(MapConfig* __this, uObject* mv);
void MapConfig__New1_fn(MapConfig** __retval);
void MapConfig__get_ShowCompass_fn(MapConfig* __this, bool* __retval);
void MapConfig__set_ShowCompass_fn(MapConfig* __this, bool* value);
void MapConfig__get_ShowMyLocation_fn(MapConfig* __this, bool* __retval);
void MapConfig__set_ShowMyLocation_fn(MapConfig* __this, bool* value);
void MapConfig__get_ShowMyLocationButton_fn(MapConfig* __this, bool* __retval);
void MapConfig__set_ShowMyLocationButton_fn(MapConfig* __this, bool* value);
void MapConfig__get_Style_fn(MapConfig* __this, int32_t* __retval);
void MapConfig__set_Style_fn(MapConfig* __this, int32_t* value);

struct MapConfig : uObject
{
    bool _AllowRotate;
    bool _AllowScroll;
    bool _AllowTilt;
    bool _AllowZoom;
    bool _ShowCompass;
    bool _ShowMyLocation;
    bool _ShowMyLocationButton;
    int32_t _Style;

    void ctor_();
    bool AllowRotate();
    void AllowRotate(bool value);
    bool AllowScroll();
    void AllowScroll(bool value);
    bool AllowTilt();
    void AllowTilt(bool value);
    bool AllowZoom();
    void AllowZoom(bool value);
    void Apply(uObject* mv);
    void CopyFrom(uObject* mv);
    bool ShowCompass();
    void ShowCompass(bool value);
    bool ShowMyLocation();
    void ShowMyLocation(bool value);
    bool ShowMyLocationButton();
    void ShowMyLocationButton(bool value);
    int32_t Style();
    void Style(int32_t value);
    static MapConfig* New1();
};
// }

}}} // ::g::Fuse::Controls
