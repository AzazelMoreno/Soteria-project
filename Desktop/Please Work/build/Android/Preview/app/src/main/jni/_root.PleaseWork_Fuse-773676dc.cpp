// This file was generated based on 'C:/Users/rudy0/Desktop/Please Work/build/Android/Preview/cache/ux14/Please Work.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.PleaseWork_Fuse-773676dc.h>
#include <Fuse.Controls.MapMarker.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class PleaseWork_FuseControlsMapMarker_Longitude_Property :27
// {
static void PleaseWork_FuseControlsMapMarker_Longitude_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::MapMarker_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Double_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.MapMarker*/], offsetof(PleaseWork_FuseControlsMapMarker_Longitude_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* PleaseWork_FuseControlsMapMarker_Longitude_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(PleaseWork_FuseControlsMapMarker_Longitude_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("PleaseWork_FuseControlsMapMarker_Longitude_Property", options);
    type->fp_build_ = PleaseWork_FuseControlsMapMarker_Longitude_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))PleaseWork_FuseControlsMapMarker_Longitude_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))PleaseWork_FuseControlsMapMarker_Longitude_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))PleaseWork_FuseControlsMapMarker_Longitude_Property__Set1_fn;
    return type;
}

// public PleaseWork_FuseControlsMapMarker_Longitude_Property(Fuse.Controls.MapMarker obj, Uno.UX.Selector name) :30
void PleaseWork_FuseControlsMapMarker_Longitude_Property__ctor_3_fn(PleaseWork_FuseControlsMapMarker_Longitude_Property* __this, ::g::Fuse::Controls::MapMarker* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed double Get(Uno.UX.PropertyObject obj) :32
void PleaseWork_FuseControlsMapMarker_Longitude_Property__Get1_fn(PleaseWork_FuseControlsMapMarker_Longitude_Property* __this, ::g::Uno::UX::PropertyObject* obj, double* __retval)
{
    uStackFrame __("PleaseWork_FuseControlsMapMarker_Longitude_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::MapMarker*>(obj, ::TYPES[0/*Fuse.Controls.MapMarker*/]))->Longitude(), void();
}

// public PleaseWork_FuseControlsMapMarker_Longitude_Property New(Fuse.Controls.MapMarker obj, Uno.UX.Selector name) :30
void PleaseWork_FuseControlsMapMarker_Longitude_Property__New1_fn(::g::Fuse::Controls::MapMarker* obj, ::g::Uno::UX::Selector* name, PleaseWork_FuseControlsMapMarker_Longitude_Property** __retval)
{
    *__retval = PleaseWork_FuseControlsMapMarker_Longitude_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :31
void PleaseWork_FuseControlsMapMarker_Longitude_Property__get_Object_fn(PleaseWork_FuseControlsMapMarker_Longitude_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, double v, Uno.UX.IPropertyListener origin) :33
void PleaseWork_FuseControlsMapMarker_Longitude_Property__Set1_fn(PleaseWork_FuseControlsMapMarker_Longitude_Property* __this, ::g::Uno::UX::PropertyObject* obj, double* v, uObject* origin)
{
    uStackFrame __("PleaseWork_FuseControlsMapMarker_Longitude_Property", "Set(Uno.UX.PropertyObject,double,Uno.UX.IPropertyListener)");
    double v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::MapMarker*>(obj, ::TYPES[0/*Fuse.Controls.MapMarker*/]))->Longitude(v_);
}

// public PleaseWork_FuseControlsMapMarker_Longitude_Property(Fuse.Controls.MapMarker obj, Uno.UX.Selector name) [instance] :30
void PleaseWork_FuseControlsMapMarker_Longitude_Property::ctor_3(::g::Fuse::Controls::MapMarker* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public PleaseWork_FuseControlsMapMarker_Longitude_Property New(Fuse.Controls.MapMarker obj, Uno.UX.Selector name) [static] :30
PleaseWork_FuseControlsMapMarker_Longitude_Property* PleaseWork_FuseControlsMapMarker_Longitude_Property::New1(::g::Fuse::Controls::MapMarker* obj, ::g::Uno::UX::Selector name)
{
    PleaseWork_FuseControlsMapMarker_Longitude_Property* obj1 = (PleaseWork_FuseControlsMapMarker_Longitude_Property*)uNew(PleaseWork_FuseControlsMapMarker_Longitude_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
