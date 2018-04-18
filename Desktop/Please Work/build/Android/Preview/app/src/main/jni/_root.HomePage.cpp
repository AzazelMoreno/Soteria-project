// This file was generated based on 'C:/Users/rudy0/Desktop/Please Work/build/Android/Preview/cache/ux14/HomePage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.HomePage.h>
#include <_root.PleaseWork_bundle.h>
#include <_root.PleaseWork_Fuse-53b56116.h>
#include <_root.PleaseWork_Fuse-773676dc.h>
#include <_root.PleaseWork_Fuse-98f6ae5b.h>
#include <_root.PleaseWork_Fuse-c7f157db.h>
#include <Fuse.Controls.MapMarker.h>
#include <Fuse.Controls.MapView.h>
#include <Fuse.Controls.NativeViewHost.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[7];
static uType* TYPES[4];

namespace g{

// public partial sealed class HomePage :2
// {
// static HomePage() :13
static void HomePage__cctor_4_fn(uType* __type)
{
    HomePage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 1, ::STRINGS[0/*"router"*/]);
    HomePage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Latitude"*/]);
    HomePage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Longitude"*/]);
}

static void HomePage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("Latitude");
    ::STRINGS[2] = uString::Const("Longitude");
    ::STRINGS[3] = uString::Const("lat");
    ::STRINGS[4] = uString::Const("long");
    ::STRINGS[5] = uString::Const("Pages/HomePage.ux");
    ::STRINGS[6] = uString::Const("Current Location");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetDependencies(
        ::g::PleaseWork_bundle_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17));
    type->SetFields(124,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(HomePage, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Double_typeof(), NULL), offsetof(HomePage, temp_Latitude_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Double_typeof(), NULL), offsetof(HomePage, temp_Longitude_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Double_typeof(), NULL), offsetof(HomePage, temp1_Latitude_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Double_typeof(), NULL), offsetof(HomePage, temp1_Longitude_inst), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(HomePage, __g_nametable1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&HomePage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&HomePage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&HomePage::__selector1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)HomePage__New5_fn, 0, true, type, 1, ::g::Fuse::Navigation::Router_typeof()));
}

::g::Fuse::Controls::Panel_type* HomePage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 133;
    options.InterfaceCount = 18;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(HomePage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("HomePage", options);
    type->fp_build_ = HomePage_build;
    type->fp_cctor_ = HomePage__cctor_4_fn;
    type->interface17.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface17.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface17.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface12.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface14.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface13.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface16.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface15.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface15.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface15.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface15.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface9.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface10.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface10.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface11.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface10.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface8.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface10.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface10.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public HomePage(Fuse.Navigation.Router router) :17
void HomePage__ctor_8_fn(HomePage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :23
void HomePage__InitializeUX_fn(HomePage* __this)
{
    __this->InitializeUX();
}

// public HomePage New(Fuse.Navigation.Router router) :17
void HomePage__New5_fn(::g::Fuse::Navigation::Router* router1, HomePage** __retval)
{
    *__retval = HomePage::New5(router1);
}

uSStrong<uArray*> HomePage::__g_static_nametable1_;
::g::Uno::UX::Selector HomePage::__selector0_;
::g::Uno::UX::Selector HomePage::__selector1_;

// public HomePage(Fuse.Navigation.Router router) [instance] :17
void HomePage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    uStackFrame __("HomePage", ".ctor(Fuse.Navigation.Router)");
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :23
void HomePage::InitializeUX()
{
    uStackFrame __("HomePage", "InitializeUX()");
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, HomePage::__g_static_nametable1_);
    ::g::Fuse::Controls::MapMarker* temp = ::g::Fuse::Controls::MapMarker::New2();
    temp_Latitude_inst = ::g::PleaseWork_FuseControlsMapMarker_Latitude_Property::New1(temp, HomePage::__selector0_);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[3/*"lat"*/]);
    temp_Longitude_inst = ::g::PleaseWork_FuseControlsMapMarker_Longitude_Property::New1(temp, HomePage::__selector1_);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[4/*"long"*/]);
    ::g::Fuse::Controls::MapView* temp1 = ::g::Fuse::Controls::MapView::New4();
    temp1_Latitude_inst = ::g::PleaseWork_FuseControlsMapView_Latitude_Property::New1(temp1, HomePage::__selector0_);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[3/*"lat"*/]);
    temp1_Longitude_inst = ::g::PleaseWork_FuseControlsMapView_Longitude_Property::New1(temp1, HomePage::__selector1_);
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[4/*"long"*/]);
    ::g::Fuse::Reactive::JavaScript* temp6 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Reactive::JavaScript* temp7 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::NativeViewHost* temp8 = ::g::Fuse::Controls::NativeViewHost::New3();
    ::g::Fuse::Reactive::DataBinding* temp9 = ::g::Fuse::Reactive::DataBinding::New1(temp_Latitude_inst, (uObject*)temp2, 3);
    ::g::Fuse::Reactive::DataBinding* temp10 = ::g::Fuse::Reactive::DataBinding::New1(temp_Longitude_inst, (uObject*)temp3, 3);
    ::g::Fuse::Reactive::DataBinding* temp11 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Latitude_inst, (uObject*)temp4, 3);
    ::g::Fuse::Reactive::DataBinding* temp12 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Longitude_inst, (uObject*)temp5, 3);
    temp6->LineNumber(3);
    temp6->FileName(::STRINGS[5/*"Pages/HomeP...*/]);
    temp6->File(::g::Uno::UX::BundleFileSource::New1(::g::PleaseWork_bundle::HomePagec8a528f3()));
    temp7->LineNumber(4);
    temp7->FileName(::STRINGS[5/*"Pages/HomeP...*/]);
    temp7->File(::g::Uno::UX::BundleFileSource::New1(::g::PleaseWork_bundle::Backend35dff620()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    temp1->ShowMyLocation(true);
    temp1->Zoom(16.0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
    temp->Label(::STRINGS[6/*"Current Loc...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp10);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[3/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
}

// public HomePage New(Fuse.Navigation.Router router) [static] :17
HomePage* HomePage::New5(::g::Fuse::Navigation::Router* router1)
{
    HomePage* obj1 = (HomePage*)uNew(HomePage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
