// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.Controls.TimePicker/1.8.1/Android/TimePicker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.ITimePickerView.h>
#include <Fuse.Controls.Native.-98938546.h>
#include <Fuse.Controls.Native.ILeafView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.DateTime.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct TimePickerView;}}}}}
namespace g{namespace Fuse{namespace Controls{struct TimePicker;}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// internal sealed extern class TimePickerView :17
// {
struct TimePickerView_type : ::g::Fuse::Controls::Native::Android::LeafView_type
{
    ::g::Fuse::Controls::ITimePickerView interface3;
};

TimePickerView_type* TimePickerView_typeof();
void TimePickerView__ctor_9_fn(TimePickerView* __this, ::g::Fuse::Controls::TimePicker* host);
void TimePickerView__Create_fn(::g::Java::Object** __retval);
void TimePickerView__Dispose_fn(TimePickerView* __this);
void TimePickerView__GetTimeInMsSince1970InUtc_fn(TimePickerView* __this, ::g::Java::Object* timePickerHandle, int64_t* __retval);
void TimePickerView__set_Is24HourView_fn(TimePickerView* __this, bool* value);
void TimePickerView__New5_fn(::g::Fuse::Controls::TimePicker* host, TimePickerView** __retval);
void TimePickerView__OnRooted_fn(TimePickerView* __this);
void TimePickerView__OnUnrooted_fn(TimePickerView* __this);
void TimePickerView__OnValueChanged_fn(TimePickerView* __this, ::g::Uno::DateTime* value);
void TimePickerView__PollViewValue_fn(TimePickerView* __this);
void TimePickerView__SetIs24HourView_fn(TimePickerView* __this, ::g::Java::Object* timePickerHandle, bool* value);
void TimePickerView__SetTime_fn(TimePickerView* __this, ::g::Java::Object* timePickerHandle, int64_t* msSince1970InUtc);
void TimePickerView__UpdatePollValueCache_fn(TimePickerView* __this);
void TimePickerView__get_Value_fn(TimePickerView* __this, ::g::Uno::DateTime* __retval);
void TimePickerView__set_Value_fn(TimePickerView* __this, ::g::Uno::DateTime* value);

struct TimePickerView : ::g::Fuse::Controls::Native::Android::LeafView
{
    uStrong< ::g::Fuse::Controls::TimePicker*> _host;
    ::g::Uno::DateTime _pollValueCache;

    void ctor_9(::g::Fuse::Controls::TimePicker* host);
    int64_t GetTimeInMsSince1970InUtc(::g::Java::Object* timePickerHandle);
    void Is24HourView(bool value);
    void OnRooted();
    void OnUnrooted();
    void OnValueChanged(::g::Uno::DateTime value);
    void PollViewValue();
    void SetIs24HourView(::g::Java::Object* timePickerHandle, bool value);
    void SetTime(::g::Java::Object* timePickerHandle, int64_t msSince1970InUtc);
    void UpdatePollValueCache();
    ::g::Uno::DateTime Value();
    void Value(::g::Uno::DateTime value);
    static ::g::Java::Object* Create();
    static TimePickerView* New5(::g::Fuse::Controls::TimePicker* host);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
