// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.Controls.Native/1.8.1/iOS/Slider.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-fbe3e9f9.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct Slider;}}}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class Slider :8
// {
struct Slider_type : uType
{
    ::g::Fuse::Controls::Native::IRangeView interface0;
};

Slider_type* Slider_typeof();
void Slider__ctor__fn(Slider* __this, uObject* host, ::g::Fuse::Visual* visual);
void Slider__New1_fn(uObject* host, ::g::Fuse::Visual* visual, Slider** __retval);
void Slider__set_Progress_fn(Slider* __this, double* value);

struct Slider : uObject
{
    void ctor_(uObject* host, ::g::Fuse::Visual* visual);
    void Progress(double value);
    static Slider* New1(uObject* host, ::g::Fuse::Visual* visual);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
