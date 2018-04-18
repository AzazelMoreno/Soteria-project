// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.DatePicker.h>
#include <Fuse.Controls.Native.-143c1647.h>
#include <Fuse.Controls.Native.-144a8301.h>
#include <Fuse.Controls.Native.-5999be91.h>
#include <Fuse.Controls.Native.-5a92aac3.h>
#include <Fuse.Controls.Native.-737f180b.h>
#include <Fuse.Controls.Native.-7ba51662.h>
#include <Fuse.Controls.Native.-ada75d53.h>
#include <Fuse.Controls.Native.-b47aa7c0.h>
#include <Fuse.Controls.Native.-ba5282a0.h>
#include <Fuse.Controls.Native.-bda9e869.h>
#include <Fuse.Controls.Native.-c20be635.h>
#include <Fuse.Controls.Native.-e48daf2f.h>
#include <Fuse.Controls.TimePicker.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.8.1\iOS\Button.uno
// -----------------------------------------------------------------------------------------

// public sealed extern class Button :6
// {
static void Button_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Button__New1_fn, 0, true, type, 0));
}

uType* Button_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Button);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.Button", options);
    type->fp_build_ = Button_build;
    type->fp_ctor_ = (void*)Button__New1_fn;
    return type;
}

// public Button() :8
void Button__ctor__fn(Button* __this)
{
    __this->ctor_();
}

// public Button New() :8
void Button__New1_fn(Button** __retval)
{
    *__retval = Button::New1();
}

// public Button() [instance] :8
void Button::ctor_()
{
}

// public Button New() [static] :8
Button* Button::New1()
{
    Button* obj1 = (Button*)uNew(Button_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Controls.DatePicker\1.8.1\iOS\DatePicker.uno
// -------------------------------------------------------------------------------------------------

// internal sealed extern class DatePickerView :12
// {
static void DatePickerView_build(uType* type)
{
}

uType* DatePickerView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(DatePickerView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.DatePickerView", options);
    type->fp_build_ = DatePickerView_build;
    return type;
}

// public DatePickerView(Fuse.Controls.DatePicker host) :15
void DatePickerView__ctor__fn(DatePickerView* __this, ::g::Fuse::Controls::DatePicker* host)
{
    __this->ctor_(host);
}

// public DatePickerView New(Fuse.Controls.DatePicker host) :15
void DatePickerView__New1_fn(::g::Fuse::Controls::DatePicker* host, DatePickerView** __retval)
{
    *__retval = DatePickerView::New1(host);
}

// public DatePickerView(Fuse.Controls.DatePicker host) [instance] :15
void DatePickerView::ctor_(::g::Fuse::Controls::DatePicker* host)
{
}

// public DatePickerView New(Fuse.Controls.DatePicker host) [static] :15
DatePickerView* DatePickerView::New1(::g::Fuse::Controls::DatePicker* host)
{
    DatePickerView* obj1 = (DatePickerView*)uNew(DatePickerView_typeof());
    obj1->ctor_(host);
    return obj1;
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.8.1\iOS\GraphicsView.uno
// -----------------------------------------------------------------------------------------------

// public sealed extern class GraphicsView :7
// {
static void GraphicsView_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GraphicsView__New1_fn, 0, true, type, 1, ::g::Fuse::Visual_typeof()));
}

uType* GraphicsView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(GraphicsView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.GraphicsView", options);
    type->fp_build_ = GraphicsView_build;
    return type;
}

// public GraphicsView(Fuse.Visual host) :10
void GraphicsView__ctor__fn(GraphicsView* __this, ::g::Fuse::Visual* host)
{
    __this->ctor_(host);
}

// public GraphicsView New(Fuse.Visual host) :10
void GraphicsView__New1_fn(::g::Fuse::Visual* host, GraphicsView** __retval)
{
    *__retval = GraphicsView::New1(host);
}

// public GraphicsView(Fuse.Visual host) [instance] :10
void GraphicsView::ctor_(::g::Fuse::Visual* host)
{
}

// public GraphicsView New(Fuse.Visual host) [static] :10
GraphicsView* GraphicsView::New1(::g::Fuse::Visual* host)
{
    GraphicsView* obj1 = (GraphicsView*)uNew(GraphicsView_typeof());
    obj1->ctor_(host);
    return obj1;
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.8.1\iOS\ScrollView.uno
// ---------------------------------------------------------------------------------------------

// public sealed extern class ScrollView :7
// {
static void ScrollView_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ScrollView__New1_fn, 0, true, type, 1, ::g::Fuse::Controls::Native::IScrollViewHost_typeof()));
}

uType* ScrollView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ScrollView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.ScrollView", options);
    type->fp_build_ = ScrollView_build;
    return type;
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host) :10
void ScrollView__ctor__fn(ScrollView* __this, uObject* host)
{
    __this->ctor_(host);
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host) :10
void ScrollView__New1_fn(uObject* host, ScrollView** __retval)
{
    *__retval = ScrollView::New1(host);
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host) [instance] :10
void ScrollView::ctor_(uObject* host)
{
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host) [static] :10
ScrollView* ScrollView::New1(uObject* host)
{
    ScrollView* obj1 = (ScrollView*)uNew(ScrollView_typeof());
    obj1->ctor_(host);
    return obj1;
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.8.1\iOS\Slider.uno
// -----------------------------------------------------------------------------------------

// public sealed extern class Slider :8
// {
static void Slider_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IRangeView_typeof(), offsetof(Slider_type, interface0));
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)Slider__New1_fn, 0, true, type, 2, ::g::Fuse::Controls::Native::IRangeViewHost_typeof(), ::g::Fuse::Visual_typeof()),
        new uFunction("set_Progress", NULL, (void*)Slider__set_Progress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
}

Slider_type* Slider_typeof()
{
    static uSStrong<Slider_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Slider);
    options.TypeSize = sizeof(Slider_type);
    type = (Slider_type*)uClassType::New("Fuse.Controls.Native.iOS.Slider", options);
    type->fp_build_ = Slider_build;
    type->interface0.fp_set_Progress = (void(*)(uObject*, double*))Slider__set_Progress_fn;
    return type;
}

// public Slider(Fuse.Controls.Native.IRangeViewHost host, Fuse.Visual visual) :13
void Slider__ctor__fn(Slider* __this, uObject* host, ::g::Fuse::Visual* visual)
{
    __this->ctor_(host, visual);
}

// public Slider New(Fuse.Controls.Native.IRangeViewHost host, Fuse.Visual visual) :13
void Slider__New1_fn(uObject* host, ::g::Fuse::Visual* visual, Slider** __retval)
{
    *__retval = Slider::New1(host, visual);
}

// public void set_Progress(double value) :10
void Slider__set_Progress_fn(Slider* __this, double* value)
{
    __this->Progress(*value);
}

// public Slider(Fuse.Controls.Native.IRangeViewHost host, Fuse.Visual visual) [instance] :13
void Slider::ctor_(uObject* host, ::g::Fuse::Visual* visual)
{
}

// public void set_Progress(double value) [instance] :10
void Slider::Progress(double value)
{
}

// public Slider New(Fuse.Controls.Native.IRangeViewHost host, Fuse.Visual visual) [static] :13
Slider* Slider::New1(uObject* host, ::g::Fuse::Visual* visual)
{
    Slider* obj1 = (Slider*)uNew(Slider_typeof());
    obj1->ctor_(host, visual);
    return obj1;
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.8.1\iOS\Switch.uno
// -----------------------------------------------------------------------------------------

// public sealed extern class Switch :7
// {
static void Switch_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IToggleView_typeof(), offsetof(Switch_type, interface0));
    type->Reflection.SetFunctions(3,
        new uFunction("set_Host", NULL, (void*)Switch__set_Host_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::Native::IToggleViewHost_typeof()),
        new uFunction(".ctor", NULL, (void*)Switch__New1_fn, 0, true, type, 1, ::g::Fuse::Controls::Native::IToggleViewHost_typeof()),
        new uFunction("set_Value", NULL, (void*)Switch__set_Value_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
}

Switch_type* Switch_typeof()
{
    static uSStrong<Switch_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Switch);
    options.TypeSize = sizeof(Switch_type);
    type = (Switch_type*)uClassType::New("Fuse.Controls.Native.iOS.Switch", options);
    type->fp_build_ = Switch_build;
    type->interface0.fp_set_Value = (void(*)(uObject*, bool*))Switch__set_Value_fn;
    return type;
}

// public Switch(Fuse.Controls.Native.IToggleViewHost host) :13
void Switch__ctor__fn(Switch* __this, uObject* host)
{
    __this->ctor_(host);
}

// public void set_Host(Fuse.Controls.Native.IToggleViewHost value) :10
void Switch__set_Host_fn(Switch* __this, uObject* value)
{
    __this->Host(value);
}

// public Switch New(Fuse.Controls.Native.IToggleViewHost host) :13
void Switch__New1_fn(uObject* host, Switch** __retval)
{
    *__retval = Switch::New1(host);
}

// public void set_Value(bool value) :9
void Switch__set_Value_fn(Switch* __this, bool* value)
{
    __this->Value(*value);
}

// public Switch(Fuse.Controls.Native.IToggleViewHost host) [instance] :13
void Switch::ctor_(uObject* host)
{
}

// public void set_Host(Fuse.Controls.Native.IToggleViewHost value) [instance] :10
void Switch::Host(uObject* value)
{
}

// public void set_Value(bool value) [instance] :9
void Switch::Value(bool value)
{
}

// public Switch New(Fuse.Controls.Native.IToggleViewHost host) [static] :13
Switch* Switch::New1(uObject* host)
{
    Switch* obj1 = (Switch*)uNew(Switch_typeof());
    obj1->ctor_(host);
    return obj1;
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.8.1\iOS\TextView.uno
// -------------------------------------------------------------------------------------------

// public sealed extern class TextView :6
// {
static void TextView_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TextView__New1_fn, 0, true, type, 0));
}

uType* TextView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(TextView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.TextView", options);
    type->fp_build_ = TextView_build;
    type->fp_ctor_ = (void*)TextView__New1_fn;
    return type;
}

// public generated TextView() :6
void TextView__ctor__fn(TextView* __this)
{
    __this->ctor_();
}

// public generated TextView New() :6
void TextView__New1_fn(TextView** __retval)
{
    *__retval = TextView::New1();
}

// public generated TextView() [instance] :6
void TextView::ctor_()
{
}

// public generated TextView New() [static] :6
TextView* TextView::New1()
{
    TextView* obj1 = (TextView*)uNew(TextView_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Controls.TimePicker\1.8.1\iOS\TimePicker.uno
// -------------------------------------------------------------------------------------------------

// internal sealed extern class TimePickerView :12
// {
static void TimePickerView_build(uType* type)
{
}

uType* TimePickerView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(TimePickerView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.TimePickerView", options);
    type->fp_build_ = TimePickerView_build;
    return type;
}

// public TimePickerView(Fuse.Controls.TimePicker host) :15
void TimePickerView__ctor__fn(TimePickerView* __this, ::g::Fuse::Controls::TimePicker* host)
{
    __this->ctor_(host);
}

// public TimePickerView New(Fuse.Controls.TimePicker host) :15
void TimePickerView__New1_fn(::g::Fuse::Controls::TimePicker* host, TimePickerView** __retval)
{
    *__retval = TimePickerView::New1(host);
}

// public TimePickerView(Fuse.Controls.TimePicker host) [instance] :15
void TimePickerView::ctor_(::g::Fuse::Controls::TimePicker* host)
{
}

// public TimePickerView New(Fuse.Controls.TimePicker host) [static] :15
TimePickerView* TimePickerView::New1(::g::Fuse::Controls::TimePicker* host)
{
    TimePickerView* obj1 = (TimePickerView*)uNew(TimePickerView_typeof());
    obj1->ctor_(host);
    return obj1;
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.8.1\iOS\PointerCaptureAdapter.uno
// --------------------------------------------------------------------------------------------------------

// internal enum TouchPhase :71
uEnumType* TouchPhase_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Controls.Native.iOS.TouchPhase", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Began", 0LL,
        "Moved", 1LL,
        "Stationary", 2LL,
        "Ended", 3LL,
        "Cancelled", 4LL);
    return type;
}

}}}}} // ::g::Fuse::Controls::Native::iOS
