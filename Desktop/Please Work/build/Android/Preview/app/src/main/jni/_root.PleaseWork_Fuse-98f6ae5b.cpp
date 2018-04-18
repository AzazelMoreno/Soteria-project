// This file was generated based on 'C:/Users/rudy0/Desktop/Please Work/build/Android/Preview/cache/ux14/Please Work.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.PleaseWork_Fuse-98f6ae5b.h>
#include <Fuse.Controls.MapView.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class PleaseWork_FuseControlsMapView_Longitude_Property :10
// {
static void PleaseWork_FuseControlsMapView_Longitude_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::MapView_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Double_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.MapView*/], offsetof(PleaseWork_FuseControlsMapView_Longitude_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* PleaseWork_FuseControlsMapView_Longitude_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(PleaseWork_FuseControlsMapView_Longitude_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("PleaseWork_FuseControlsMapView_Longitude_Property", options);
    type->fp_build_ = PleaseWork_FuseControlsMapView_Longitude_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))PleaseWork_FuseControlsMapView_Longitude_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))PleaseWork_FuseControlsMapView_Longitude_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))PleaseWork_FuseControlsMapView_Longitude_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))PleaseWork_FuseControlsMapView_Longitude_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public PleaseWork_FuseControlsMapView_Longitude_Property(Fuse.Controls.MapView obj, Uno.UX.Selector name) :13
void PleaseWork_FuseControlsMapView_Longitude_Property__ctor_3_fn(PleaseWork_FuseControlsMapView_Longitude_Property* __this, ::g::Fuse::Controls::MapView* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed double Get(Uno.UX.PropertyObject obj) :15
void PleaseWork_FuseControlsMapView_Longitude_Property__Get1_fn(PleaseWork_FuseControlsMapView_Longitude_Property* __this, ::g::Uno::UX::PropertyObject* obj, double* __retval)
{
    uStackFrame __("PleaseWork_FuseControlsMapView_Longitude_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::MapView*>(obj, ::TYPES[0/*Fuse.Controls.MapView*/]))->Longitude(), void();
}

// public PleaseWork_FuseControlsMapView_Longitude_Property New(Fuse.Controls.MapView obj, Uno.UX.Selector name) :13
void PleaseWork_FuseControlsMapView_Longitude_Property__New1_fn(::g::Fuse::Controls::MapView* obj, ::g::Uno::UX::Selector* name, PleaseWork_FuseControlsMapView_Longitude_Property** __retval)
{
    *__retval = PleaseWork_FuseControlsMapView_Longitude_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :14
void PleaseWork_FuseControlsMapView_Longitude_Property__get_Object_fn(PleaseWork_FuseControlsMapView_Longitude_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, double v, Uno.UX.IPropertyListener origin) :16
void PleaseWork_FuseControlsMapView_Longitude_Property__Set1_fn(PleaseWork_FuseControlsMapView_Longitude_Property* __this, ::g::Uno::UX::PropertyObject* obj, double* v, uObject* origin)
{
    uStackFrame __("PleaseWork_FuseControlsMapView_Longitude_Property", "Set(Uno.UX.PropertyObject,double,Uno.UX.IPropertyListener)");
    double v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::MapView*>(obj, ::TYPES[0/*Fuse.Controls.MapView*/]))->SetLongitude(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :17
void PleaseWork_FuseControlsMapView_Longitude_Property__get_SupportsOriginSetter_fn(PleaseWork_FuseControlsMapView_Longitude_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public PleaseWork_FuseControlsMapView_Longitude_Property(Fuse.Controls.MapView obj, Uno.UX.Selector name) [instance] :13
void PleaseWork_FuseControlsMapView_Longitude_Property::ctor_3(::g::Fuse::Controls::MapView* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public PleaseWork_FuseControlsMapView_Longitude_Property New(Fuse.Controls.MapView obj, Uno.UX.Selector name) [static] :13
PleaseWork_FuseControlsMapView_Longitude_Property* PleaseWork_FuseControlsMapView_Longitude_Property::New1(::g::Fuse::Controls::MapView* obj, ::g::Uno::UX::Selector name)
{
    PleaseWork_FuseControlsMapView_Longitude_Property* obj1 = (PleaseWork_FuseControlsMapView_Longitude_Property*)uNew(PleaseWork_FuseControlsMapView_Longitude_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
