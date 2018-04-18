// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Primitiv-2b9696be.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Fuse.AppBase.h>
#include <Fuse.Controls.AutoCap-526a856d.h>
#include <Fuse.Controls.AutoCorrectHint.h>
#include <Fuse.Controls.DatePicker.h>
#include <Fuse.Controls.DatePickerBase.h>
#include <Fuse.Controls.Native.-118b98c3.h>
#include <Fuse.Controls.Native.-3a814c3c.h>
#include <Fuse.Controls.Native.-3d61e8e3.h>
#include <Fuse.Controls.Native.-43e7fbf.h>
#include <Fuse.Controls.Native.-454aa827.h>
#include <Fuse.Controls.Native.-4914c58b.h>
#include <Fuse.Controls.Native.-4da376b6.h>
#include <Fuse.Controls.Native.-51b6e8e5.h>
#include <Fuse.Controls.Native.-56f4c151.h>
#include <Fuse.Controls.Native.-5999be91.h>
#include <Fuse.Controls.Native.-6009f819.h>
#include <Fuse.Controls.Native.-6178e8bc.h>
#include <Fuse.Controls.Native.-6c93d881.h>
#include <Fuse.Controls.Native.-737f180b.h>
#include <Fuse.Controls.Native.-7babb833.h>
#include <Fuse.Controls.Native.-88fc1c1d.h>
#include <Fuse.Controls.Native.-890b856e.h>
#include <Fuse.Controls.Native.-8a1d0695.h>
#include <Fuse.Controls.Native.-98938546.h>
#include <Fuse.Controls.Native.-9abb3393.h>
#include <Fuse.Controls.Native.-a1ee0915.h>
#include <Fuse.Controls.Native.-ae84b26e.h>
#include <Fuse.Controls.Native.-ba5282a0.h>
#include <Fuse.Controls.Native.-c578532e.h>
#include <Fuse.Controls.Native.-c67cabe.h>
#include <Fuse.Controls.Native.-ca2427b3.h>
#include <Fuse.Controls.Native.-cb7bb609.h>
#include <Fuse.Controls.Native.-ce8863c0.h>
#include <Fuse.Controls.Native.-dd7dd49d.h>
#include <Fuse.Controls.Native.-e502cdf1.h>
#include <Fuse.Controls.Native.-e81f3684.h>
#include <Fuse.Controls.Native.-eb2a3c99.h>
#include <Fuse.Controls.Native.-f43d469d.h>
#include <Fuse.Controls.Native.-f67615b8.h>
#include <Fuse.Controls.Native.-f715ad8a.h>
#include <Fuse.Controls.Native.-fb992a16.h>
#include <Fuse.Controls.ScrollDirections.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextInp-90db19ac.h>
#include <Fuse.Controls.TextInp-cfb86f57.h>
#include <Fuse.Controls.TextInputHint.h>
#include <Fuse.Controls.TextTruncation.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Controls.TimePicker.h>
#include <Fuse.Controls.TimePickerBase.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.Drawing.NativeSurface.h>
#include <Fuse.Drawing.Surface.h>
#include <Fuse.Font.h>
#include <Fuse.ICommonViewport.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEventData.h>
#include <Fuse.IViewport.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.LayoutPriority.h>
#include <Fuse.Node.h>
#include <Fuse.Resources.FileImageSource.h>
#include <Fuse.Resources.HttpImageSource.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.Resources.MultiD-7688643f.h>
#include <Fuse.Resources.System-1e583f40.h>
#include <Fuse.Time.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Java.Object.h>
#include <jni.h>
#include <OpenGL.GL.h>
#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.Action2-2.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.HashSet-1.h>
#include <Uno.Color.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.DateTime.h>
#include <Uno.DateTimeKind.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IntPtr.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Long.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Platform.PointerType.h>
#include <Uno.String.h>
#include <Uno.Threading.Future1-1.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.UInt.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno/Graphics/GLHelper.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[5];
static uType* TYPES[27];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.8.1\Android\Button.uno
// ---------------------------------------------------------------------------------------------

// public sealed extern class Button :7
// {
static void Button_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Button_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Button_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(Button_type, interface2),
        ::g::Fuse::Controls::Native::ILabelView_typeof(), offsetof(Button_type, interface3));
    type->SetFields(6);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)Button__New5_fn, 0, true, type, 0),
        new uFunction("set_Text", NULL, (void*)Button__set_Text_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
}

Button_type* Button_typeof()
{
    static uSStrong<Button_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::LeafView_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Button);
    options.TypeSize = sizeof(Button_type);
    type = (Button_type*)uClassType::New("Fuse.Controls.Native.Android.Button", options);
    type->fp_build_ = Button_build;
    type->fp_ctor_ = (void*)Button__New5_fn;
    type->interface3.fp_set_Text = (void(*)(uObject*, uString*))Button__set_Text_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// public Button() :9
void Button__ctor_9_fn(Button* __this)
{
    __this->ctor_9();
}

// private static Java.Object Create() :17
void Button__Create_fn(::g::Java::Object** __retval)
{
    *__retval = Button::Create();
}

// public Button New() :9
void Button__New5_fn(Button** __retval)
{
    *__retval = Button::New5();
}

// private static void SetText(Java.Object handle, string text) :23
void Button__SetText_fn(::g::Java::Object* handle, uString* text)
{
    Button::SetText(handle, text);
}

// public void set_Text(string value) :13
void Button__set_Text_fn(Button* __this, uString* value)
{
    __this->Text(value);
}

// public Button() [instance] :9
void Button::ctor_9()
{
    ctor_7(Button::Create());
}

// public void set_Text(string value) [instance] :13
void Button::Text(uString* value)
{
    Button::SetText(Handle(), value);
}

// private static Java.Object Create() [static] :17
::g::Java::Object* Button::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create120", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public Button New() [static] :9
Button* Button::New5()
{
    Button* obj1 = (Button*)uNew(Button_typeof());
    obj1->ctor_9();
    return obj1;
}

// private static void SetText(Java.Object handle, string text) [static] :23
void Button::SetText(::g::Java::Object* handle, uString* text)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetText121", "(Ljava/lang/Object;Ljava/lang/String;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uString* _utext=text;
        jstring _text = JniHelper::UnoToJavaString(_utext);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_text);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_text!=NULL) { U_JNIVAR->DeleteLocalRef(_text); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.8.1\Android\CanvasViewGroup.uno
// ------------------------------------------------------------------------------------------------------

// public sealed extern class CanvasViewGroup :9
// {
static void CanvasViewGroup_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Attempt to draw native canvas without surface");
    ::STRINGS[1] = uString::Const("C:\\Users\\rudy0\\AppData\\Local\\Fusetools\\Packages\\Fuse.Controls.Native\\1.8.1\\Android\\CanvasViewGroup.uno");
    ::STRINGS[2] = uString::Const("OnDraw");
    ::TYPES[0] = ::g::Uno::Action1_typeof()->MakeType(::g::Java::Object_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(CanvasViewGroup_type, interface0),
        ::g::Fuse::Drawing::INativeSurfaceOwner_typeof(), offsetof(CanvasViewGroup_type, interface1));
    type->SetFields(5,
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(CanvasViewGroup, _surfaceDrawable), 0,
        ::g::Uno::Float_typeof(), offsetof(CanvasViewGroup, _pixelsPerPoint), 0,
        ::g::Fuse::Drawing::NativeSurface_typeof(), offsetof(CanvasViewGroup, _nativeSurface), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)CanvasViewGroup__New5_fn, 0, true, type, 2, ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), ::g::Uno::Float_typeof()));
}

CanvasViewGroup_type* CanvasViewGroup_typeof()
{
    static uSStrong<CanvasViewGroup_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::ViewHandle_typeof();
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(CanvasViewGroup);
    options.TypeSize = sizeof(CanvasViewGroup_type);
    type = (CanvasViewGroup_type*)uClassType::New("Fuse.Controls.Native.Android.CanvasViewGroup", options);
    type->fp_build_ = CanvasViewGroup_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))CanvasViewGroup__Dispose_fn;
    type->interface1.fp_GetSurface = (void(*)(uObject*, ::g::Fuse::Drawing::Surface**))CanvasViewGroup__FuseDrawingINativeSurfaceOwnerGetSurface_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))CanvasViewGroup__Dispose_fn;
    return type;
}

// public CanvasViewGroup(Fuse.Drawing.ISurfaceDrawable surfaceDrawable, float pixelsPerPoint) :15
void CanvasViewGroup__ctor_4_fn(CanvasViewGroup* __this, uObject* surfaceDrawable, float* pixelsPerPoint)
{
    __this->ctor_4(surfaceDrawable, *pixelsPerPoint);
}

// public override sealed void Dispose() :72
void CanvasViewGroup__Dispose_fn(CanvasViewGroup* __this)
{
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
    __this->_surfaceDrawable = NULL;
    __this->_nativeSurface = NULL;
}

// internal Fuse.Drawing.Surface Fuse.Drawing.INativeSurfaceOwner.GetSurface() :24
void CanvasViewGroup__FuseDrawingINativeSurfaceOwnerGetSurface_fn(CanvasViewGroup* __this, ::g::Fuse::Drawing::Surface** __retval)
{
    if (__this->_nativeSurface == NULL)
    {
        __this->InstallDrawlistener(__this->NativeHandle, uDelegate::New(::TYPES[0/*Uno.Action<Java.Object>*/], (void*)CanvasViewGroup__OnDraw_fn, __this));
        __this->_nativeSurface = ::g::Fuse::Drawing::NativeSurface::New1();
    }

    return *__retval = __this->_nativeSurface, void();
}

// private void InstallDrawlistener(Java.Object handle, Uno.Action<Java.Object> callback) :48
void CanvasViewGroup__InstallDrawlistener_fn(CanvasViewGroup* __this, ::g::Java::Object* handle, uDelegate* callback)
{
    __this->InstallDrawlistener(handle, callback);
}

// private static Java.Object Instantiate() :61
void CanvasViewGroup__Instantiate_fn(::g::Java::Object** __retval)
{
    *__retval = CanvasViewGroup::Instantiate();
}

// public CanvasViewGroup New(Fuse.Drawing.ISurfaceDrawable surfaceDrawable, float pixelsPerPoint) :15
void CanvasViewGroup__New5_fn(uObject* surfaceDrawable, float* pixelsPerPoint, CanvasViewGroup** __retval)
{
    *__retval = CanvasViewGroup::New5(surfaceDrawable, *pixelsPerPoint);
}

// private void OnDraw(Java.Object canvas) :34
void CanvasViewGroup__OnDraw_fn(CanvasViewGroup* __this, ::g::Java::Object* canvas)
{
    __this->OnDraw(canvas);
}

// public CanvasViewGroup(Fuse.Drawing.ISurfaceDrawable surfaceDrawable, float pixelsPerPoint) [instance] :15
void CanvasViewGroup::ctor_4(uObject* surfaceDrawable, float pixelsPerPoint)
{
    ctor_3(CanvasViewGroup::Instantiate(), false, false, 1);
    _surfaceDrawable = surfaceDrawable;
    _pixelsPerPoint = pixelsPerPoint;
}

// private void InstallDrawlistener(Java.Object handle, Uno.Action<Java.Object> callback) [instance] :48
void CanvasViewGroup::InstallDrawlistener(::g::Java::Object* handle, uDelegate* callback)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "InstallDrawlistener122", "(Lcom/uno/UnoObject;Ljava/lang/Object;Lcom/foreign/Uno/Action_Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uDelegate* _ucallback=callback;
        jobject _callback = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_ucallback, "com.foreign.Uno.Action_Object");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle,_callback);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_callback!=NULL) { U_JNIVAR->DeleteLocalRef(_callback); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void OnDraw(Java.Object canvas) [instance] :34
void CanvasViewGroup::OnDraw(::g::Java::Object* canvas)
{
    uStackFrame __("Fuse.Controls.Native.Android.CanvasViewGroup", "OnDraw(Java.Object)");

    if (_nativeSurface == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[0/*"Attempt to ...*/], this, ::STRINGS[1/*"C:\\Users\\...*/], 38, ::STRINGS[2/*"OnDraw"*/]);
        return;
    }

    uPtr(_nativeSurface)->Begin1(canvas, _pixelsPerPoint);
    uPtr(_nativeSurface)->DrawLocal(_surfaceDrawable);
    uPtr(_nativeSurface)->End();
}

// private static Java.Object Instantiate() [static] :61
::g::Java::Object* CanvasViewGroup::Instantiate()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Instantiate123", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public CanvasViewGroup New(Fuse.Drawing.ISurfaceDrawable surfaceDrawable, float pixelsPerPoint) [static] :15
CanvasViewGroup* CanvasViewGroup::New5(uObject* surfaceDrawable, float pixelsPerPoint)
{
    CanvasViewGroup* obj1 = (CanvasViewGroup*)uNew(CanvasViewGroup_typeof());
    obj1->ctor_4(surfaceDrawable, pixelsPerPoint);
    return obj1;
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Controls.DatePicker\1.8.1\Android\DatePicker.uno
// -----------------------------------------------------------------------------------------------------

// internal sealed extern class DatePickerView :17
// {
static void DatePickerView_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Action_typeof();
    type->SetDependencies(
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(DatePickerView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(DatePickerView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(DatePickerView_type, interface2),
        ::g::Fuse::Controls::IDatePickerView_typeof(), offsetof(DatePickerView_type, interface3));
    type->SetFields(6,
        ::g::Fuse::Controls::DatePicker_typeof(), offsetof(DatePickerView, _host), 0,
        ::g::Uno::DateTime_typeof(), offsetof(DatePickerView, _pollValueCache), 0,
        ::g::Uno::Int_typeof(), offsetof(DatePickerView, writebackFrameCounter), 0);
}

DatePickerView_type* DatePickerView_typeof()
{
    static uSStrong<DatePickerView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::LeafView_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 4;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DatePickerView);
    options.TypeSize = sizeof(DatePickerView_type);
    type = (DatePickerView_type*)uClassType::New("Fuse.Controls.Native.Android.DatePickerView", options);
    type->fp_build_ = DatePickerView_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))DatePickerView__Dispose_fn;
    type->fp_OnSizeChanged = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))DatePickerView__OnSizeChanged_fn;
    type->interface3.fp_OnRooted = (void(*)(uObject*))DatePickerView__OnRooted_fn;
    type->interface3.fp_OnUnrooted = (void(*)(uObject*))DatePickerView__OnUnrooted_fn;
    type->interface3.fp_set_Value = (void(*)(uObject*, ::g::Uno::DateTime*))DatePickerView__set_Value_fn;
    type->interface3.fp_set_MinValue = (void(*)(uObject*, ::g::Uno::DateTime*))DatePickerView__set_MinValue_fn;
    type->interface3.fp_set_MaxValue = (void(*)(uObject*, ::g::Uno::DateTime*))DatePickerView__set_MaxValue_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))DatePickerView__Dispose_fn;
    return type;
}

// public DatePickerView(Fuse.Controls.DatePicker host) :22
void DatePickerView__ctor_9_fn(DatePickerView* __this, ::g::Fuse::Controls::DatePicker* host)
{
    __this->ctor_9(host);
}

// private static Java.Object Create() :147
void DatePickerView__Create_fn(::g::Java::Object** __retval)
{
    *__retval = DatePickerView::Create();
}

// public override sealed void Dispose() :36
void DatePickerView__Dispose_fn(DatePickerView* __this)
{
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
    __this->_host = NULL;
}

// private static int GetApiLevel() :141
void DatePickerView__GetApiLevel_fn(int32_t* __retval)
{
    *__retval = DatePickerView::GetApiLevel();
}

// private long GetDateInMsSince1970InUtc(Java.Object datePickerHandle) :184
void DatePickerView__GetDateInMsSince1970InUtc_fn(DatePickerView* __this, ::g::Java::Object* datePickerHandle, int64_t* __retval)
{
    *__retval = __this->GetDateInMsSince1970InUtc(datePickerHandle);
}

// private void Init(Java.Object datePickerHandle) :153
void DatePickerView__Init_fn(DatePickerView* __this, ::g::Java::Object* datePickerHandle)
{
    __this->Init(datePickerHandle);
}

// public void set_MaxValue(Uno.DateTime value) :137
void DatePickerView__set_MaxValue_fn(DatePickerView* __this, ::g::Uno::DateTime* value)
{
    __this->MaxValue(*value);
}

// public void set_MinValue(Uno.DateTime value) :132
void DatePickerView__set_MinValue_fn(DatePickerView* __this, ::g::Uno::DateTime* value)
{
    __this->MinValue(*value);
}

// public DatePickerView New(Fuse.Controls.DatePicker host) :22
void DatePickerView__New5_fn(::g::Fuse::Controls::DatePicker* host, DatePickerView** __retval)
{
    *__retval = DatePickerView::New5(host);
}

// public void OnRooted() :115
void DatePickerView__OnRooted_fn(DatePickerView* __this)
{
    __this->OnRooted();
}

// protected internal override sealed void OnSizeChanged() :84
void DatePickerView__OnSizeChanged_fn(DatePickerView* __this)
{
    if (DatePickerView::GetApiLevel() >= 24)
        return;

    __this->writebackFrameCounter = 0;
}

// public void OnUnrooted() :120
void DatePickerView__OnUnrooted_fn(DatePickerView* __this)
{
    __this->OnUnrooted();
}

// private void OnValueChanged(Uno.DateTime value) :125
void DatePickerView__OnValueChanged_fn(DatePickerView* __this, ::g::Uno::DateTime* value)
{
    __this->OnValueChanged(*value);
}

// private void PollViewValue() :63
void DatePickerView__PollViewValue_fn(DatePickerView* __this)
{
    __this->PollViewValue();
}

// private void SetDate(Java.Object datePickerHandle, long msSince1970InUtc) :170
void DatePickerView__SetDate_fn(DatePickerView* __this, ::g::Java::Object* datePickerHandle, int64_t* msSince1970InUtc)
{
    __this->SetDate(datePickerHandle, *msSince1970InUtc);
}

// private void SetMaxValue(Java.Object datePickerHandle, long msSince1970InUtc) :221
void DatePickerView__SetMaxValue_fn(DatePickerView* __this, ::g::Java::Object* datePickerHandle, int64_t* msSince1970InUtc)
{
    __this->SetMaxValue(datePickerHandle, *msSince1970InUtc);
}

// private void SetMinValue(Java.Object datePickerHandle, long msSince1970InUtc) :205
void DatePickerView__SetMinValue_fn(DatePickerView* __this, ::g::Java::Object* datePickerHandle, int64_t* msSince1970InUtc)
{
    __this->SetMinValue(datePickerHandle, *msSince1970InUtc);
}

// public void Update() :109
void DatePickerView__Update_fn(DatePickerView* __this)
{
    __this->Update();
}

// private void UpdatePollValueCache() :58
void DatePickerView__UpdatePollValueCache_fn(DatePickerView* __this)
{
    __this->UpdatePollValueCache();
}

// private void UpdateWriteback() :92
void DatePickerView__UpdateWriteback_fn(DatePickerView* __this)
{
    __this->UpdateWriteback();
}

// public Uno.DateTime get_Value() :44
void DatePickerView__get_Value_fn(DatePickerView* __this, ::g::Uno::DateTime* __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(Uno.DateTime value) :49
void DatePickerView__set_Value_fn(DatePickerView* __this, ::g::Uno::DateTime* value)
{
    __this->Value(*value);
}

// public DatePickerView(Fuse.Controls.DatePicker host) [instance] :22
void DatePickerView::ctor_9(::g::Fuse::Controls::DatePicker* host)
{
    uStackFrame __("Fuse.Controls.Native.Android.DatePickerView", ".ctor(Fuse.Controls.DatePicker)");
    ctor_7(DatePickerView::Create());
    _host = host;
    Init(Handle());
    MinValue(uPtr(_host)->MinValue());
    MaxValue(uPtr(_host)->MaxValue());
    Value(uPtr(_host)->Value());
    UpdatePollValueCache();
}

// private long GetDateInMsSince1970InUtc(Java.Object datePickerHandle) [instance] :184
int64_t DatePickerView::GetDateInMsSince1970InUtc(::g::Java::Object* datePickerHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetDateInMsSince1970InUtc126", "(Lcom/uno/UnoObject;Ljava/lang/Object;)J");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _udatePickerHandle=datePickerHandle;
        jobject _datePickerHandle = (_udatePickerHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_udatePickerHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jlong __jresult = U_JNIVAR->CallStaticLongMethod(__cls,__mtd,_this_,_datePickerHandle);
        int64_t __result = (int64_t)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_datePickerHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_datePickerHandle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private void Init(Java.Object datePickerHandle) [instance] :153
void DatePickerView::Init(::g::Java::Object* datePickerHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Init127", "(Lcom/uno/UnoObject;Ljava/lang/Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _udatePickerHandle=datePickerHandle;
        jobject _datePickerHandle = (_udatePickerHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_udatePickerHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_datePickerHandle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_datePickerHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_datePickerHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public void set_MaxValue(Uno.DateTime value) [instance] :137
void DatePickerView::MaxValue(::g::Uno::DateTime value)
{
    SetMaxValue(Handle(), ::g::Fuse::Controls::Native::Android::DateTimeConverterHelpers::ConvertDateTimeToMsSince1970InUtc(value));
}

// public void set_MinValue(Uno.DateTime value) [instance] :132
void DatePickerView::MinValue(::g::Uno::DateTime value)
{
    SetMinValue(Handle(), ::g::Fuse::Controls::Native::Android::DateTimeConverterHelpers::ConvertDateTimeToMsSince1970InUtc(value));
}

// public void OnRooted() [instance] :115
void DatePickerView::OnRooted()
{
    uStackFrame __("Fuse.Controls.Native.Android.DatePickerView", "OnRooted()");
    ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)DatePickerView__Update_fn, this), 0);
}

// public void OnUnrooted() [instance] :120
void DatePickerView::OnUnrooted()
{
    uStackFrame __("Fuse.Controls.Native.Android.DatePickerView", "OnUnrooted()");
    ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)DatePickerView__Update_fn, this), 0);
}

// private void OnValueChanged(Uno.DateTime value) [instance] :125
void DatePickerView::OnValueChanged(::g::Uno::DateTime value)
{
    uStackFrame __("Fuse.Controls.Native.Android.DatePickerView", "OnValueChanged(Uno.DateTime)");
    uPtr(_host)->OnNativeViewValueChanged(value);
}

// private void PollViewValue() [instance] :63
void DatePickerView::PollViewValue()
{
    uStackFrame __("Fuse.Controls.Native.Android.DatePickerView", "PollViewValue()");

    if (::g::Uno::DateTime__op_Inequality(Value(), _pollValueCache))
    {
        OnValueChanged(Value());
        UpdatePollValueCache();
    }
}

// private void SetDate(Java.Object datePickerHandle, long msSince1970InUtc) [instance] :170
void DatePickerView::SetDate(::g::Java::Object* datePickerHandle, int64_t msSince1970InUtc)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetDate128", "(Lcom/uno/UnoObject;Ljava/lang/Object;J)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _udatePickerHandle=datePickerHandle;
        jobject _datePickerHandle = (_udatePickerHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_udatePickerHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int64_t _umsSince1970InUtc=msSince1970InUtc;
        jlong _msSince1970InUtc = (jlong)_umsSince1970InUtc;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_datePickerHandle,_msSince1970InUtc);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_datePickerHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_datePickerHandle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void SetMaxValue(Java.Object datePickerHandle, long msSince1970InUtc) [instance] :221
void DatePickerView::SetMaxValue(::g::Java::Object* datePickerHandle, int64_t msSince1970InUtc)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetMaxValue129", "(Lcom/uno/UnoObject;Ljava/lang/Object;J)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _udatePickerHandle=datePickerHandle;
        jobject _datePickerHandle = (_udatePickerHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_udatePickerHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int64_t _umsSince1970InUtc=msSince1970InUtc;
        jlong _msSince1970InUtc = (jlong)_umsSince1970InUtc;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_datePickerHandle,_msSince1970InUtc);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_datePickerHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_datePickerHandle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void SetMinValue(Java.Object datePickerHandle, long msSince1970InUtc) [instance] :205
void DatePickerView::SetMinValue(::g::Java::Object* datePickerHandle, int64_t msSince1970InUtc)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetMinValue130", "(Lcom/uno/UnoObject;Ljava/lang/Object;J)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _udatePickerHandle=datePickerHandle;
        jobject _datePickerHandle = (_udatePickerHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_udatePickerHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int64_t _umsSince1970InUtc=msSince1970InUtc;
        jlong _msSince1970InUtc = (jlong)_umsSince1970InUtc;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_datePickerHandle,_msSince1970InUtc);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_datePickerHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_datePickerHandle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public void Update() [instance] :109
void DatePickerView::Update()
{
    uStackFrame __("Fuse.Controls.Native.Android.DatePickerView", "Update()");
    PollViewValue();
    UpdateWriteback();
}

// private void UpdatePollValueCache() [instance] :58
void DatePickerView::UpdatePollValueCache()
{
    _pollValueCache = Value();
}

// private void UpdateWriteback() [instance] :92
void DatePickerView::UpdateWriteback()
{
    if (DatePickerView::GetApiLevel() >= 24)
        return;

    if (writebackFrameCounter < 2)
    {
        writebackFrameCounter++;

        if (writebackFrameCounter == 2)
        {
            int64_t v = ::g::Fuse::Controls::Native::Android::DateTimeConverterHelpers::ConvertDateTimeToMsSince1970InUtc(Value());
            SetDate(Handle(), v - 1LL);
            SetDate(Handle(), v);
        }
    }
}

// public Uno.DateTime get_Value() [instance] :44
::g::Uno::DateTime DatePickerView::Value()
{
    int64_t msSince1970InUtc = GetDateInMsSince1970InUtc(Handle());
    return ::g::Fuse::Controls::Native::Android::DateTimeConverterHelpers::ConvertMsSince1970InUtcToDateTime(msSince1970InUtc);
}

// public void set_Value(Uno.DateTime value) [instance] :49
void DatePickerView::Value(::g::Uno::DateTime value)
{
    SetDate(Handle(), ::g::Fuse::Controls::Native::Android::DateTimeConverterHelpers::ConvertDateTimeToMsSince1970InUtc(value));
    UpdatePollValueCache();
}

// private static Java.Object Create() [static] :147
::g::Java::Object* DatePickerView::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create124", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetApiLevel() [static] :141
int32_t DatePickerView::GetApiLevel()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetApiLevel125", "()I");
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd);
        int32_t __result = (int32_t)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public DatePickerView New(Fuse.Controls.DatePicker host) [static] :22
DatePickerView* DatePickerView::New5(::g::Fuse::Controls::DatePicker* host)
{
    DatePickerView* obj1 = (DatePickerView*)uNew(DatePickerView_typeof());
    obj1->ctor_9(host);
    return obj1;
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.8.1\Android\DateTimeConverterHelpers.uno
// ---------------------------------------------------------------------------------------------------------------

// internal static extern class DateTimeConverterHelpers :5
// {
static void DateTimeConverterHelpers_build(uType* type)
{
}

uClassType* DateTimeConverterHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.Android.DateTimeConverterHelpers", options);
    type->fp_build_ = DateTimeConverterHelpers_build;
    return type;
}

// public static long ConvertDateTimeToMsSince1970InUtc(Uno.DateTime dt) :18
void DateTimeConverterHelpers__ConvertDateTimeToMsSince1970InUtc_fn(::g::Uno::DateTime* dt, int64_t* __retval)
{
    *__retval = DateTimeConverterHelpers::ConvertDateTimeToMsSince1970InUtc(*dt);
}

// public static Uno.DateTime ConvertMsSince1970InUtcToDateTime(long msSince1970InUtc) :10
void DateTimeConverterHelpers__ConvertMsSince1970InUtcToDateTime_fn(int64_t* msSince1970InUtc, ::g::Uno::DateTime* __retval)
{
    *__retval = DateTimeConverterHelpers::ConvertMsSince1970InUtcToDateTime(*msSince1970InUtc);
}

// public static long ConvertDateTimeToMsSince1970InUtc(Uno.DateTime dt) [static] :18
int64_t DateTimeConverterHelpers::ConvertDateTimeToMsSince1970InUtc(::g::Uno::DateTime dt)
{
    uStackFrame __("Fuse.Controls.Native.Android.DateTimeConverterHelpers", "ConvertDateTimeToMsSince1970InUtc(Uno.DateTime)");
    dt = dt.ToUniversalTime();
    int64_t dotNetTicks = dt.Ticks();
    int64_t dotNetTicksRelativeToUnixEpoch = dotNetTicks - 621355968000000000LL;
    int64_t msSince1970InUtc = dotNetTicksRelativeToUnixEpoch / 10000LL;
    return msSince1970InUtc;
}

// public static Uno.DateTime ConvertMsSince1970InUtcToDateTime(long msSince1970InUtc) [static] :10
::g::Uno::DateTime DateTimeConverterHelpers::ConvertMsSince1970InUtcToDateTime(int64_t msSince1970InUtc)
{
    uStackFrame __("Fuse.Controls.Native.Android.DateTimeConverterHelpers", "ConvertMsSince1970InUtcToDateTime(long)");
    int64_t dotNetTicksRelativeToUnixEpoch = msSince1970InUtc * 10000LL;
    int64_t dotNetTicks = dotNetTicksRelativeToUnixEpoch + 621355968000000000LL;
    return ::g::Uno::DateTime__New1(dotNetTicks, 1);
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.8.1\Android\TextEdit.uno
// -----------------------------------------------------------------------------------------------

// internal sealed extern class FocusChangedListener :552
// {
static void FocusChangedListener_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(FocusChangedListener_type, interface0));
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(FocusChangedListener, _listener), 0,
        ::g::Java::Object_typeof(), offsetof(FocusChangedListener, _view), 0,
        ::g::Uno::Action2_typeof()->MakeType(::g::Java::Object_typeof(), ::g::Uno::Bool_typeof(), NULL), offsetof(FocusChangedListener, _callback), 0);
}

FocusChangedListener_type* FocusChangedListener_typeof()
{
    static uSStrong<FocusChangedListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FocusChangedListener);
    options.TypeSize = sizeof(FocusChangedListener_type);
    type = (FocusChangedListener_type*)uClassType::New("Fuse.Controls.Native.Android.FocusChangedListener", options);
    type->fp_build_ = FocusChangedListener_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))FocusChangedListener__Dispose_fn;
    return type;
}

// private FocusChangedListener(Java.Object view, Uno.Action<Java.Object, bool> callback) :559
void FocusChangedListener__ctor__fn(FocusChangedListener* __this, ::g::Java::Object* view, uDelegate* callback)
{
    __this->ctor_(view, callback);
}

// public static Uno.IDisposable AddHandler(Java.Object view, Uno.Action<Java.Object, bool> callback) :574
void FocusChangedListener__AddHandler_fn(::g::Java::Object* view, uDelegate* callback, uObject** __retval)
{
    *__retval = FocusChangedListener::AddHandler(view, callback);
}

// private static void ClearListener(Java.Object viewHandle) :604
void FocusChangedListener__ClearListener_fn(::g::Java::Object* viewHandle)
{
    FocusChangedListener::ClearListener(viewHandle);
}

// private Java.Object Create() :587
void FocusChangedListener__Create_fn(FocusChangedListener* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Create();
}

// public void Dispose() :581
void FocusChangedListener__Dispose_fn(FocusChangedListener* __this)
{
    __this->Dispose();
}

// private FocusChangedListener New(Java.Object view, Uno.Action<Java.Object, bool> callback) :559
void FocusChangedListener__New1_fn(::g::Java::Object* view, uDelegate* callback, FocusChangedListener** __retval)
{
    *__retval = FocusChangedListener::New1(view, callback);
}

// private void OnFocusChange(bool hasFocus) :569
void FocusChangedListener__OnFocusChange_fn(FocusChangedListener* __this, bool* hasFocus)
{
    __this->OnFocusChange(*hasFocus);
}

// private static void SetListener(Java.Object viewHandle, Java.Object listenerHandle) :598
void FocusChangedListener__SetListener_fn(::g::Java::Object* viewHandle, ::g::Java::Object* listenerHandle)
{
    FocusChangedListener::SetListener(viewHandle, listenerHandle);
}

// private FocusChangedListener(Java.Object view, Uno.Action<Java.Object, bool> callback) [instance] :559
void FocusChangedListener::ctor_(::g::Java::Object* view, uDelegate* callback)
{
    _view = view;
    _callback = callback;
    _listener = Create();
    FocusChangedListener::SetListener(_view, _listener);
}

// private Java.Object Create() [instance] :587
::g::Java::Object* FocusChangedListener::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create132", "(Lcom/uno/UnoObject;)Ljava/lang/Object;");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_this_);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public void Dispose() [instance] :581
void FocusChangedListener::Dispose()
{
    FocusChangedListener::ClearListener(_view);
}

// private void OnFocusChange(bool hasFocus) [instance] :569
void FocusChangedListener::OnFocusChange(bool hasFocus)
{
    uStackFrame __("Fuse.Controls.Native.Android.FocusChangedListener", "OnFocusChange(bool)");
    uPtr(_callback)->Invoke(2, (::g::Java::Object*)_view, uCRef(hasFocus));
}

// public static Uno.IDisposable AddHandler(Java.Object view, Uno.Action<Java.Object, bool> callback) [static] :574
uObject* FocusChangedListener::AddHandler(::g::Java::Object* view, uDelegate* callback)
{
    uStackFrame __("Fuse.Controls.Native.Android.FocusChangedListener", "AddHandler(Java.Object,Uno.Action<Java.Object, bool>)");
    return (uObject*)FocusChangedListener::New1(view, callback);
}

// private static void ClearListener(Java.Object viewHandle) [static] :604
void FocusChangedListener::ClearListener(::g::Java::Object* viewHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ClearListener131", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private FocusChangedListener New(Java.Object view, Uno.Action<Java.Object, bool> callback) [static] :559
FocusChangedListener* FocusChangedListener::New1(::g::Java::Object* view, uDelegate* callback)
{
    FocusChangedListener* obj1 = (FocusChangedListener*)uNew(FocusChangedListener_typeof());
    obj1->ctor_(view, callback);
    return obj1;
}

// private static void SetListener(Java.Object viewHandle, Java.Object listenerHandle) [static] :598
void FocusChangedListener::SetListener(::g::Java::Object* viewHandle, ::g::Java::Object* listenerHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetListener134", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ulistenerHandle=listenerHandle;
        jobject _listenerHandle = (_ulistenerHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ulistenerHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle,_listenerHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        if (_listenerHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_listenerHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.8.1\Android\TextEdit.uno
// -----------------------------------------------------------------------------------------------

// internal sealed extern class FocusManager :480
// {
// static generated FocusManager() :480
static void FocusManager__cctor__fn(uType* __type)
{
    FocusManager::Singleton_ = FocusManager::New1();
}

static void FocusManager_build(uType* type)
{
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(FocusManager, LoseFocus), 0,
        ::g::Java::Object_typeof(), offsetof(FocusManager, HideKeyboardContext), 0,
        ::g::Java::Object_typeof(), offsetof(FocusManager, HideKeyboardWindowToken), 0,
        type, (uintptr_t)&FocusManager::Singleton_, uFieldFlagsStatic);
}

uType* FocusManager_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(FocusManager);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.FocusManager", options);
    type->fp_build_ = FocusManager_build;
    type->fp_ctor_ = (void*)FocusManager__New1_fn;
    type->fp_cctor_ = FocusManager__cctor__fn;
    return type;
}

// public generated FocusManager() :480
void FocusManager__ctor__fn(FocusManager* __this)
{
    __this->ctor_();
}

// public void CompleteFocusLoss() :488
void FocusManager__CompleteFocusLoss_fn(FocusManager* __this)
{
    __this->CompleteFocusLoss();
}

// public static Java.Object GetContext(Java.Object viewHandle) :517
void FocusManager__GetContext_fn(::g::Java::Object* viewHandle, ::g::Java::Object** __retval)
{
    *__retval = FocusManager::GetContext(viewHandle);
}

// public static Java.Object GetWindowToken(Java.Object viewHandle) :523
void FocusManager__GetWindowToken_fn(::g::Java::Object* viewHandle, ::g::Java::Object** __retval)
{
    *__retval = FocusManager::GetWindowToken(viewHandle);
}

// private static bool HasFocus(Java.Object viewHandle) :505
void FocusManager__HasFocus_fn(::g::Java::Object* viewHandle, bool* __retval)
{
    *__retval = FocusManager::HasFocus(viewHandle);
}

// public generated FocusManager New() :480
void FocusManager__New1_fn(FocusManager** __retval)
{
    *__retval = FocusManager::New1();
}

// private static void RequestRootViewFocus(Java.Object viewHandle) :511
void FocusManager__RequestRootViewFocus_fn(::g::Java::Object* viewHandle)
{
    FocusManager::RequestRootViewFocus(viewHandle);
}

uSStrong<FocusManager*> FocusManager::Singleton_;

// public generated FocusManager() [instance] :480
void FocusManager::ctor_()
{
}

// public void CompleteFocusLoss() [instance] :488
void FocusManager::CompleteFocusLoss()
{
    if (LoseFocus != NULL)
    {
        if (FocusManager::HasFocus(LoseFocus))
            FocusManager::RequestRootViewFocus(LoseFocus);

        LoseFocus = NULL;
    }

    if (HideKeyboardContext != NULL)
    {
        ::g::Fuse::Controls::Native::Android::SoftKeyboard::HideKeyboard(HideKeyboardContext, HideKeyboardWindowToken);
        HideKeyboardContext = NULL;
    }
}

// public static Java.Object GetContext(Java.Object viewHandle) [static] :517
::g::Java::Object* FocusManager::GetContext(::g::Java::Object* viewHandle)
{
    FocusManager_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetContext135", "(Ljava/lang/Object;)Ljava/lang/Object;");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_viewHandle);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static Java.Object GetWindowToken(Java.Object viewHandle) [static] :523
::g::Java::Object* FocusManager::GetWindowToken(::g::Java::Object* viewHandle)
{
    FocusManager_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetWindowToken136", "(Ljava/lang/Object;)Ljava/lang/Object;");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_viewHandle);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static bool HasFocus(Java.Object viewHandle) [static] :505
bool FocusManager::HasFocus(::g::Java::Object* viewHandle)
{
    FocusManager_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "HasFocus137", "(Ljava/lang/Object;)Z");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_viewHandle);
        bool __result = (bool)__jresult;
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public generated FocusManager New() [static] :480
FocusManager* FocusManager::New1()
{
    FocusManager* obj1 = (FocusManager*)uNew(FocusManager_typeof());
    obj1->ctor_();
    return obj1;
}

// private static void RequestRootViewFocus(Java.Object viewHandle) [static] :511
void FocusManager::RequestRootViewFocus(::g::Java::Object* viewHandle)
{
    FocusManager_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "RequestRootViewFocus138", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.8.1\Android\GraphicsView.uno
// ---------------------------------------------------------------------------------------------------

// public abstract extern class GraphicsViewBase :10
// {
static void GraphicsViewBase_build(uType* type)
{
    ::TYPES[2] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(GraphicsViewBase_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(GraphicsViewBase_type, interface1),
        ::g::Fuse::Controls::Native::IGraphicsView_typeof(), offsetof(GraphicsViewBase_type, interface2),
        ::g::Fuse::Controls::Native::IViewHost_typeof(), offsetof(GraphicsViewBase_type, interface3));
    type->SetFields(6,
        ::g::Java::Object_typeof(), offsetof(GraphicsViewBase, _graphicsViewHandle), 0,
        ::g::Java::Object_typeof(), offsetof(GraphicsViewBase, _surfaceHandle), 0,
        ::g::Uno::IntPtr_typeof(), offsetof(GraphicsViewBase, _eglSurface), 0,
        ::g::Uno::IntPtr_typeof(), offsetof(GraphicsViewBase, _nativeWindow), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("BeginDraw", NULL, (void*)GraphicsViewBase__BeginDraw_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Int2_typeof()),
        new uFunction("EndDraw", NULL, (void*)GraphicsViewBase__EndDraw_fn, 0, false, uVoid_typeof(), 0));
}

GraphicsViewBase_type* GraphicsViewBase_typeof()
{
    static uSStrong<GraphicsViewBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::View_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(GraphicsViewBase);
    options.TypeSize = sizeof(GraphicsViewBase_type);
    type = (GraphicsViewBase_type*)uClassType::New("Fuse.Controls.Native.Android.GraphicsViewBase", options);
    type->fp_build_ = GraphicsViewBase_build;
    type->interface3.fp_Insert = (void(*)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*))GraphicsViewBase__FuseControlsNativeIViewHostInsert_fn;
    type->interface3.fp_Remove = (void(*)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*))GraphicsViewBase__FuseControlsNativeIViewHostRemove_fn;
    type->interface2.fp_BeginDraw = (void(*)(uObject*, ::g::Uno::Int2*, bool*))GraphicsViewBase__BeginDraw_fn;
    type->interface2.fp_EndDraw = (void(*)(uObject*))GraphicsViewBase__EndDraw_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// protected GraphicsViewBase(Java.Object handle) :28
void GraphicsViewBase__ctor_7_fn(GraphicsViewBase* __this, ::g::Java::Object* handle)
{
    __this->ctor_7(handle);
}

// public bool BeginDraw(int2 size) :67
void GraphicsViewBase__BeginDraw_fn(GraphicsViewBase* __this, ::g::Uno::Int2* size, bool* __retval)
{
    *__retval = __this->BeginDraw(*size);
}

// protected void DestroySurface() :55
void GraphicsViewBase__DestroySurface_fn(GraphicsViewBase* __this)
{
    __this->DestroySurface();
}

// public void EndDraw() :90
void GraphicsViewBase__EndDraw_fn(GraphicsViewBase* __this)
{
    __this->EndDraw();
}

// private void Fuse.Controls.Native.IViewHost.Insert(Fuse.Controls.Native.ViewHandle child) :12
void GraphicsViewBase__FuseControlsNativeIViewHostInsert_fn(GraphicsViewBase* __this, ::g::Fuse::Controls::Native::ViewHandle* child)
{
    uStackFrame __("Fuse.Controls.Native.Android.GraphicsViewBase", "Fuse.Controls.Native.IViewHost.Insert(Fuse.Controls.Native.ViewHandle)");
    ::g::Fuse::Controls::Native::Android::ViewGroup::AddView(__this->Handle(), uPtr(child)->NativeHandle);
}

// private void Fuse.Controls.Native.IViewHost.Remove(Fuse.Controls.Native.ViewHandle child) :17
void GraphicsViewBase__FuseControlsNativeIViewHostRemove_fn(GraphicsViewBase* __this, ::g::Fuse::Controls::Native::ViewHandle* child)
{
    uStackFrame __("Fuse.Controls.Native.Android.GraphicsViewBase", "Fuse.Controls.Native.IViewHost.Remove(Fuse.Controls.Native.ViewHandle)");
    ::g::Fuse::Controls::Native::Android::ViewGroup::RemoveView(__this->Handle(), uPtr(child)->NativeHandle);
}

// protected Java.Object get_GraphicsViewHandle() :25
void GraphicsViewBase__get_GraphicsViewHandle_fn(GraphicsViewBase* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->GraphicsViewHandle();
}

// protected void SetSurface(Java.Object surfaceHandle) :40
void GraphicsViewBase__SetSurface_fn(GraphicsViewBase* __this, ::g::Java::Object* surfaceHandle)
{
    __this->SetSurface(surfaceHandle);
}

// protected GraphicsViewBase(Java.Object handle) [instance] :28
void GraphicsViewBase::ctor_7(::g::Java::Object* handle)
{
    _eglSurface = ::g::Uno::IntPtr::Zero_;
    _nativeWindow = ::g::Uno::IntPtr::Zero_;
    ctor_4(::g::Fuse::Controls::Native::Android::ViewGroup::Create());
    _graphicsViewHandle = handle;
    ::g::Fuse::Controls::Native::Android::ViewGroup::AddView1(Handle(), _graphicsViewHandle, 0);
}

// public bool BeginDraw(int2 size) [instance] :67
bool GraphicsViewBase::BeginDraw(::g::Uno::Int2 size)
{
    if (::g::Uno::IntPtr::op_Equality(_eglSurface, ::g::Uno::IntPtr::Zero_))
        return false;

    double t;
    GLHelper::MakeCurrent( GLHelper::GetSurfaceContext(), (EGLSurface)_eglSurface );
    ::g::OpenGL::GL::Viewport(0, 0, size.X, size.Y);
    return true;
}

// protected void DestroySurface() [instance] :55
void GraphicsViewBase::DestroySurface()
{
    GLHelper::SwapBackToBackgroundSurface( (EGLSurface)_eglSurface );
    _eglSurface = ::g::Uno::IntPtr::Zero_;
    ANativeWindow_release( (ANativeWindow*)_nativeWindow );
    _nativeWindow = ::g::Uno::IntPtr::Zero_;
    _surfaceHandle = NULL;
}

// public void EndDraw() [instance] :90
void GraphicsViewBase::EndDraw()
{
    double t;
    GLHelper::SwapBuffers( _eglSurface );
}

// protected Java.Object get_GraphicsViewHandle() [instance] :25
::g::Java::Object* GraphicsViewBase::GraphicsViewHandle()
{
    return _graphicsViewHandle;
}

// protected void SetSurface(Java.Object surfaceHandle) [instance] :40
void GraphicsViewBase::SetSurface(::g::Java::Object* surfaceHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.GraphicsViewBase", "SetSurface(Java.Object)");

    if (_surfaceHandle != NULL)
        ;

    _surfaceHandle = surfaceHandle;
    _nativeWindow = GLHelper::GetANativeWindowFromSurface(uPtr(uCast< ::g::Android::Base::Wrappers::JWrapper*>(_surfaceHandle, ::TYPES[2/*Android.Base.Wrappers.JWrapper*/]))->_GetJavaObject());
    EGLSurface tempSurface;
    GLHelper::CreateNewSurfaceAndMakeCurrent( (ANativeWindow*)_nativeWindow, tempSurface);
    _eglSurface = tempSurface;
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.8.1\Android\ImageView.uno
// ------------------------------------------------------------------------------------------------

// internal sealed extern class HttpImageLoader :19
// {
static void HttpImageLoader_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action1_typeof()->MakeType(::g::Java::Object_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetBase(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Java::Object_typeof(), NULL));
    type->SetDependencies(
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(9,
        ::g::Uno::Bool_typeof(), offsetof(HttpImageLoader, _isDisposed1), 0);
}

::g::Uno::Threading::Future_type* HttpImageLoader_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::Promise_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(HttpImageLoader);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Fuse.Controls.Native.Android.HttpImageLoader", options);
    type->fp_build_ = HttpImageLoader_build;
    type->fp_Dispose = (void(*)(::g::Uno::Threading::Future*))HttpImageLoader__Dispose_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))HttpImageLoader__Dispose_fn;
    return type;
}

// public HttpImageLoader(string url) :22
void HttpImageLoader__ctor_7_fn(HttpImageLoader* __this, uString* url)
{
    __this->ctor_7(url);
}

// public override sealed void Dispose() :64
void HttpImageLoader__Dispose_fn(HttpImageLoader* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.HttpImageLoader", "Dispose()");
    __this->_isDisposed1 = true;
    ::g::Uno::Threading::Future1__Dispose_fn(__this);
}

// private void Error(string errorMsg) :33
void HttpImageLoader__Error_fn(HttpImageLoader* __this, uString* errorMsg)
{
    __this->Error(errorMsg);
}

// private static void LoadAsync(string urlString, Uno.Action<Java.Object> success, Uno.Action<string> error) :40
void HttpImageLoader__LoadAsync_fn(uString* urlString, uDelegate* success, uDelegate* error)
{
    HttpImageLoader::LoadAsync(urlString, success, error);
}

// public HttpImageLoader New(string url) :22
void HttpImageLoader__New5_fn(uString* url, HttpImageLoader** __retval)
{
    *__retval = HttpImageLoader::New5(url);
}

// private void Success(Java.Object bitmap) :27
void HttpImageLoader__Success_fn(HttpImageLoader* __this, ::g::Java::Object* bitmap)
{
    __this->Success(bitmap);
}

// public HttpImageLoader(string url) [instance] :22
void HttpImageLoader::ctor_7(uString* url)
{
    uStackFrame __("Fuse.Controls.Native.Android.HttpImageLoader", ".ctor(string)");
    ctor_5(::g::Fuse::UpdateManager::Dispatcher());
    HttpImageLoader::LoadAsync(url, uDelegate::New(::TYPES[0/*Uno.Action<Java.Object>*/], (void*)HttpImageLoader__Success_fn, this), uDelegate::New(::TYPES[3/*Uno.Action<string>*/], (void*)HttpImageLoader__Error_fn, this));
}

// private void Error(string errorMsg) [instance] :33
void HttpImageLoader::Error(uString* errorMsg)
{
    uStackFrame __("Fuse.Controls.Native.Android.HttpImageLoader", "Error(string)");

    if (!_isDisposed1)
        Reject(::g::Uno::Exception::New2(errorMsg));
}

// private void Success(Java.Object bitmap) [instance] :27
void HttpImageLoader::Success(::g::Java::Object* bitmap)
{
    uStackFrame __("Fuse.Controls.Native.Android.HttpImageLoader", "Success(Java.Object)");

    if (!_isDisposed1)
        ::g::Uno::Threading::Promise__Resolve_fn(this, bitmap);
}

// private static void LoadAsync(string urlString, Uno.Action<Java.Object> success, Uno.Action<string> error) [static] :40
void HttpImageLoader::LoadAsync(uString* urlString, uDelegate* success, uDelegate* error)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "LoadAsync139", "(Ljava/lang/String;Lcom/foreign/Uno/Action_Object;Lcom/foreign/Uno/Action_String;)V");
        uString* _uurlString=urlString;
        jstring _urlString = JniHelper::UnoToJavaString(_uurlString);
        uDelegate* _usuccess=success;
        jobject _success = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_usuccess, "com.foreign.Uno.Action_Object");
        uDelegate* _uerror=error;
        jobject _error = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uerror, "com.foreign.Uno.Action_String");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_urlString,_success,_error);
        
        if (_urlString!=NULL) { U_JNIVAR->DeleteLocalRef(_urlString); }
        if (_success!=NULL) { U_JNIVAR->DeleteLocalRef(_success); }
        if (_error!=NULL) { U_JNIVAR->DeleteLocalRef(_error); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public HttpImageLoader New(string url) [static] :22
HttpImageLoader* HttpImageLoader::New5(uString* url)
{
    HttpImageLoader* obj1 = (HttpImageLoader*)uNew(HttpImageLoader_typeof());
    obj1->ctor_7(url);
    return obj1;
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.8.1\Android\ImageView.uno
// ------------------------------------------------------------------------------------------------

// internal sealed extern class ImageView :72
// {
static void ImageView_build(uType* type)
{
    ::STRINGS[3] = uString::Const(" not supported in native context");
    ::TYPES[4] = ::g::Fuse::Resources::MultiDensityImageSource_typeof();
    ::TYPES[1] = ::g::Uno::Action_typeof();
    ::TYPES[5] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Controls::Native::ImageHandle_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::Resources::FileImageSource_typeof();
    ::TYPES[8] = ::g::Fuse::Resources::HttpImageSource_typeof();
    ::TYPES[9] = ::g::Uno::IDisposable_typeof();
    ::TYPES[10] = ::g::Java::Object_typeof();
    type->SetDependencies(
        ::g::Uno::Color_typeof(),
        ::g::Fuse::Controls::Native::ImageLoader_typeof());
    type->SetInterfaces(
        ::TYPES[9/*Uno.IDisposable*/], offsetof(ImageView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(ImageView_type, interface1),
        ::g::Fuse::Controls::Native::IImageView_typeof(), offsetof(ImageView_type, interface2));
    type->SetFields(6,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(ImageView, _imageSource), 0,
        ::g::Uno::Float4_typeof(), offsetof(ImageView, _tintColor), 0,
        ::TYPES[10/*Java.Object*/], offsetof(ImageView, _imageView), 0,
        ::TYPES[9/*Uno.IDisposable*/], offsetof(ImageView, _imageHandle), 0);
}

ImageView_type* ImageView_typeof()
{
    static uSStrong<ImageView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::View_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 3;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(ImageView);
    options.TypeSize = sizeof(ImageView_type);
    type = (ImageView_type*)uClassType::New("Fuse.Controls.Native.Android.ImageView", options);
    type->fp_build_ = ImageView_build;
    type->fp_ctor_ = (void*)ImageView__New5_fn;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))ImageView__Dispose_fn;
    type->interface2.fp_UpdateImageTransform = (void(*)(uObject*, float*, ::g::Uno::Float2*, ::g::Uno::Float2*, ::g::Uno::Float2*))ImageView__UpdateImageTransform_fn;
    type->interface2.fp_set_ImageSource = (void(*)(uObject*, ::g::Fuse::Resources::ImageSource*))ImageView__set_ImageSource_fn;
    type->interface2.fp_set_TintColor = (void(*)(uObject*, ::g::Uno::Float4*))ImageView__set_TintColor_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ImageView__Dispose_fn;
    return type;
}

// public ImageView() :127
void ImageView__ctor_7_fn(ImageView* __this)
{
    __this->ctor_7();
}

// private static void ClearBitmap(Java.Object handle) :260
void ImageView__ClearBitmap_fn(::g::Java::Object* handle)
{
    ImageView::ClearBitmap(handle);
}

// private static Java.Object Create(Java.Object container) :267
void ImageView__Create_fn(::g::Java::Object* container, ::g::Java::Object** __retval)
{
    *__retval = ImageView::Create(container);
}

// private static Java.Object CreateContainer() :278
void ImageView__CreateContainer_fn(::g::Java::Object** __retval)
{
    *__retval = ImageView::CreateContainer();
}

// public override sealed void Dispose() :132
void ImageView__Dispose_fn(ImageView* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.ImageView", "Dispose()");
    __this->ImageHandle(NULL);

    if ((__this->ImageSource() != NULL) && uIs((::g::Fuse::Resources::ImageSource*)__this->ImageSource(), ::TYPES[4/*Fuse.Resources.MultiDensityImageSource*/]))
        uPtr(uCast< ::g::Fuse::Resources::MultiDensityImageSource*>(__this->ImageSource(), ::TYPES[4/*Fuse.Resources.MultiDensityImageSource*/]))->remove_ActiveChanged(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)ImageView__OnMultiDensityImageSourceActiveChanged_fn, __this));

    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
}

// private void set_ImageHandle(Fuse.Controls.Native.ImageHandle value) :157
void ImageView__set_ImageHandle_fn(ImageView* __this, ::g::Fuse::Controls::Native::ImageHandle* value)
{
    __this->ImageHandle(value);
}

// private Fuse.Resources.ImageSource get_ImageSource() :101
void ImageView__get_ImageSource_fn(ImageView* __this, ::g::Fuse::Resources::ImageSource** __retval)
{
    *__retval = __this->ImageSource();
}

// public void set_ImageSource(Fuse.Resources.ImageSource value) :78
void ImageView__set_ImageSource_fn(ImageView* __this, ::g::Fuse::Resources::ImageSource* value)
{
    __this->ImageSource(value);
}

// public ImageView New() :127
void ImageView__New5_fn(ImageView** __retval)
{
    *__retval = ImageView::New5();
}

// private void OnImageLoaded(Fuse.Controls.Native.ImageHandle handle) :200
void ImageView__OnImageLoaded_fn(ImageView* __this, ::g::Fuse::Controls::Native::ImageHandle* handle)
{
    __this->OnImageLoaded(handle);
}

// private void OnImageLoadFailed(Uno.Exception e) :205
void ImageView__OnImageLoadFailed_fn(ImageView* __this, ::g::Uno::Exception* e)
{
    __this->OnImageLoadFailed(e);
}

// private void OnMultiDensityImageSourceActiveChanged() :107
void ImageView__OnMultiDensityImageSourceActiveChanged_fn(ImageView* __this)
{
    __this->OnMultiDensityImageSourceActiveChanged();
}

// private static void SetBitmap(Java.Object handle, Java.Object bitmapHandle) :244
void ImageView__SetBitmap_fn(::g::Java::Object* handle, ::g::Java::Object* bitmapHandle)
{
    ImageView::SetBitmap(handle, bitmapHandle);
}

// private static void SetTint(Java.Object handle, int rgba) :251
void ImageView__SetTint_fn(::g::Java::Object* handle, int32_t* rgba)
{
    ImageView::SetTint(handle, *rgba);
}

// public void set_TintColor(float4 value) :118
void ImageView__set_TintColor_fn(ImageView* __this, ::g::Uno::Float4* value)
{
    __this->TintColor(*value);
}

// private void UpdateImage(Fuse.Resources.FileImageSource fileImageSource) :176
void ImageView__UpdateImage_fn(ImageView* __this, ::g::Fuse::Resources::FileImageSource* fileImageSource)
{
    __this->UpdateImage(fileImageSource);
}

// private void UpdateImage(Fuse.Resources.HttpImageSource http) :181
void ImageView__UpdateImage1_fn(ImageView* __this, ::g::Fuse::Resources::HttpImageSource* http)
{
    __this->UpdateImage1(http);
}

// private void UpdateImage(Fuse.Resources.MultiDensityImageSource multi) :186
void ImageView__UpdateImage2_fn(ImageView* __this, ::g::Fuse::Resources::MultiDensityImageSource* multi)
{
    __this->UpdateImage2(multi);
}

// public void UpdateImageTransform(float density, float2 origin, float2 scale, float2 drawSize) :142
void ImageView__UpdateImageTransform_fn(ImageView* __this, float* density, ::g::Uno::Float2* origin, ::g::Uno::Float2* scale, ::g::Uno::Float2* drawSize)
{
    __this->UpdateImageTransform(*density, *origin, *scale, *drawSize);
}

// private static void UpdateImageTransform(Java.Object handle, float x, float y, float scaleX, float scaleY) :229
void ImageView__UpdateImageTransform1_fn(::g::Java::Object* handle, float* x, float* y, float* scaleX, float* scaleY)
{
    ImageView::UpdateImageTransform1(handle, *x, *y, *scaleX, *scaleY);
}

// public ImageView() [instance] :127
void ImageView::ctor_7()
{
    _tintColor = ::g::Uno::Float4__New1(1.0f);
    ctor_4(ImageView::CreateContainer());
    _imageView = ImageView::Create(Handle());
}

// private void set_ImageHandle(Fuse.Controls.Native.ImageHandle value) [instance] :157
void ImageView::ImageHandle(::g::Fuse::Controls::Native::ImageHandle* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.ImageView", "set_ImageHandle(Fuse.Controls.Native.ImageHandle)");

    if (_imageHandle != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_imageHandle), ::TYPES[9/*Uno.IDisposable*/]));
        _imageHandle = NULL;
        ImageView::ClearBitmap(_imageView);
    }

    _imageHandle = (uObject*)value;

    if (_imageHandle != NULL)
    {
        ImageView::SetBitmap(_imageView, uCast< ::g::Java::Object*>(uPtr(value)->Handle(), ::TYPES[10/*Java.Object*/]));
        ImageView::SetTint(_imageView, (int32_t)::g::Uno::Color::ToArgb(_tintColor));
    }
}

// private Fuse.Resources.ImageSource get_ImageSource() [instance] :101
::g::Fuse::Resources::ImageSource* ImageView::ImageSource()
{
    return _imageSource;
}

// public void set_ImageSource(Fuse.Resources.ImageSource value) [instance] :78
void ImageView::ImageSource(::g::Fuse::Resources::ImageSource* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.ImageView", "set_ImageSource(Fuse.Resources.ImageSource)");

    if (uIs((::g::Fuse::Resources::ImageSource*)ImageSource(), ::TYPES[4/*Fuse.Resources.MultiDensityImageSource*/]))
        uPtr(uCast< ::g::Fuse::Resources::MultiDensityImageSource*>(ImageSource(), ::TYPES[4/*Fuse.Resources.MultiDensityImageSource*/]))->remove_ActiveChanged(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)ImageView__OnMultiDensityImageSourceActiveChanged_fn, this));

    _imageSource = value;

    if (value == NULL)
        return;

    if (uIs(value, ::TYPES[7/*Fuse.Resources.FileImageSource*/]))
        UpdateImage(uCast< ::g::Fuse::Resources::FileImageSource*>(value, ::TYPES[7/*Fuse.Resources.FileImageSource*/]));
    else if (uIs(value, ::TYPES[8/*Fuse.Resources.HttpImageSource*/]))
        UpdateImage1(uCast< ::g::Fuse::Resources::HttpImageSource*>(value, ::TYPES[8/*Fuse.Resources.HttpImageSource*/]));
    else if (uIs(value, ::TYPES[4/*Fuse.Resources.MultiDensityImageSource*/]))
    {
        uPtr(uCast< ::g::Fuse::Resources::MultiDensityImageSource*>(ImageSource(), ::TYPES[4/*Fuse.Resources.MultiDensityImageSource*/]))->add_ActiveChanged(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)ImageView__OnMultiDensityImageSourceActiveChanged_fn, this));
        UpdateImage2(uCast< ::g::Fuse::Resources::MultiDensityImageSource*>(value, ::TYPES[4/*Fuse.Resources.MultiDensityImageSource*/]));
    }
    else
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition(value, ::STRINGS[3/*" not suppor...*/])));
}

// private void OnImageLoaded(Fuse.Controls.Native.ImageHandle handle) [instance] :200
void ImageView::OnImageLoaded(::g::Fuse::Controls::Native::ImageHandle* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.ImageView", "OnImageLoaded(Fuse.Controls.Native.ImageHandle)");
    ImageHandle(handle);
}

// private void OnImageLoadFailed(Uno.Exception e) [instance] :205
void ImageView::OnImageLoadFailed(::g::Uno::Exception* e)
{
    uStackFrame __("Fuse.Controls.Native.Android.ImageView", "OnImageLoadFailed(Uno.Exception)");
    ImageHandle(NULL);
}

// private void OnMultiDensityImageSourceActiveChanged() [instance] :107
void ImageView::OnMultiDensityImageSourceActiveChanged()
{
    uStackFrame __("Fuse.Controls.Native.Android.ImageView", "OnMultiDensityImageSourceActiveChanged()");

    if (uIs((::g::Fuse::Resources::ImageSource*)ImageSource(), ::TYPES[4/*Fuse.Resources.MultiDensityImageSource*/]))
        UpdateImage2(uCast< ::g::Fuse::Resources::MultiDensityImageSource*>(ImageSource(), ::TYPES[4/*Fuse.Resources.MultiDensityImageSource*/]));
}

// public void set_TintColor(float4 value) [instance] :118
void ImageView::TintColor(::g::Uno::Float4 value)
{
    _tintColor = value;
    ImageView::SetTint(_imageView, (int32_t)::g::Uno::Color::ToArgb(_tintColor));
}

// private void UpdateImage(Fuse.Resources.FileImageSource fileImageSource) [instance] :176
void ImageView::UpdateImage(::g::Fuse::Resources::FileImageSource* fileImageSource)
{
    uStackFrame __("Fuse.Controls.Native.Android.ImageView", "UpdateImage(Fuse.Resources.FileImageSource)");
    ImageHandle(::g::Fuse::Controls::Native::ImageLoader::Load3(uPtr(fileImageSource)->File()));
}

// private void UpdateImage(Fuse.Resources.HttpImageSource http) [instance] :181
void ImageView::UpdateImage1(::g::Fuse::Resources::HttpImageSource* http)
{
    uStackFrame __("Fuse.Controls.Native.Android.ImageView", "UpdateImage(Fuse.Resources.HttpImageSource)");
    uPtr(::g::Fuse::Controls::Native::ImageLoader::Load(http))->Then1(uDelegate::New(::TYPES[5/*Uno.Action<Fuse.Controls.Native.ImageHandle>*/], (void*)ImageView__OnImageLoaded_fn, this), uDelegate::New(::TYPES[6/*Uno.Action<Uno.Exception>*/], (void*)ImageView__OnImageLoadFailed_fn, this));
}

// private void UpdateImage(Fuse.Resources.MultiDensityImageSource multi) [instance] :186
void ImageView::UpdateImage2(::g::Fuse::Resources::MultiDensityImageSource* multi)
{
    uStackFrame __("Fuse.Controls.Native.Android.ImageView", "UpdateImage(Fuse.Resources.MultiDensityImageSource)");
    ::g::Fuse::Resources::ImageSource* active = uPtr(multi)->Active();

    if (active != NULL)
    {
        if (uIs(active, ::TYPES[7/*Fuse.Resources.FileImageSource*/]))
            UpdateImage(uCast< ::g::Fuse::Resources::FileImageSource*>(active, ::TYPES[7/*Fuse.Resources.FileImageSource*/]));
        else if (uIs(active, ::TYPES[8/*Fuse.Resources.HttpImageSource*/]))
            UpdateImage1(uCast< ::g::Fuse::Resources::HttpImageSource*>(active, ::TYPES[8/*Fuse.Resources.HttpImageSource*/]));
        else
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition(active, ::STRINGS[3/*" not suppor...*/])));
    }
}

// public void UpdateImageTransform(float density, float2 origin, float2 scale, float2 drawSize) [instance] :142
void ImageView::UpdateImageTransform(float density, ::g::Uno::Float2 origin, ::g::Uno::Float2 scale, ::g::Uno::Float2 drawSize)
{
    ::g::Uno::Int2 imagePos = ::g::Uno::Int2__op_Explicit1(::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Multiply1(origin, density)));
    ::g::Uno::Float2 imageScale = ::g::Uno::Float2__op_Multiply1(scale, density);
    ImageView::UpdateImageTransform1(_imageView, (float)imagePos.X, (float)imagePos.Y, imageScale.X, imageScale.Y);
}

// private static void ClearBitmap(Java.Object handle) [static] :260
void ImageView::ClearBitmap(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ClearBitmap140", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object Create(Java.Object container) [static] :267
::g::Java::Object* ImageView::Create(::g::Java::Object* container)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create141", "(Ljava/lang/Object;)Ljava/lang/Object;");
        ::g::Java::Object* _ucontainer=container;
        jobject _container = (_ucontainer==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ucontainer, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_container);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_container!=NULL) { U_JNIVAR->DeleteLocalRef(_container); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object CreateContainer() [static] :278
::g::Java::Object* ImageView::CreateContainer()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateContainer142", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public ImageView New() [static] :127
ImageView* ImageView::New5()
{
    ImageView* obj1 = (ImageView*)uNew(ImageView_typeof());
    obj1->ctor_7();
    return obj1;
}

// private static void SetBitmap(Java.Object handle, Java.Object bitmapHandle) [static] :244
void ImageView::SetBitmap(::g::Java::Object* handle, ::g::Java::Object* bitmapHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetBitmap144", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ubitmapHandle=bitmapHandle;
        jobject _bitmapHandle = (_ubitmapHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ubitmapHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_bitmapHandle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_bitmapHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_bitmapHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetTint(Java.Object handle, int rgba) [static] :251
void ImageView::SetTint(::g::Java::Object* handle, int32_t rgba)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTint145", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _urgba=rgba;
        jint _rgba = (jint)_urgba;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_rgba);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void UpdateImageTransform(Java.Object handle, float x, float y, float scaleX, float scaleY) [static] :229
void ImageView::UpdateImageTransform1(::g::Java::Object* handle, float x, float y, float scaleX, float scaleY)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "UpdateImageTransform1146", "(Ljava/lang/Object;FFFF)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _ux=x;
        jfloat _x = (jfloat)_ux;
        float _uy=y;
        jfloat _y = (jfloat)_uy;
        float _uscaleX=scaleX;
        jfloat _scaleX = (jfloat)_uscaleX;
        float _uscaleY=scaleY;
        jfloat _scaleY = (jfloat)_uscaleY;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_x,_y,_scaleX,_scaleY);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.8.1\Android\InputDispatch.uno
// ----------------------------------------------------------------------------------------------------

// internal static extern class InputDispatch :10
// {
// static generated InputDispatch() :10
static void InputDispatch__cctor__fn(uType* __type)
{
    InputDispatch::_listeners_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[11/*Uno.Collections.Dictionary<Java.Object, Fuse.Visual>*/]));
    InputDispatch::_activePointers_ = ((::g::Uno::Collections::HashSet*)::g::Uno::Collections::HashSet::New1(::TYPES[12/*Uno.Collections.HashSet<int>*/]));
}

static void InputDispatch_build(uType* type)
{
    ::TYPES[11] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Java::Object_typeof(), ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[12] = ::g::Uno::Collections::HashSet_typeof()->MakeType(::g::Uno::Int_typeof(), NULL);
    ::TYPES[13] = ::g::Fuse::Visual_typeof();
    ::TYPES[14] = ::g::Fuse::Controls::Native::NativeRootViewport_typeof();
    ::TYPES[15] = ::g::Fuse::ICommonViewport_typeof();
    ::TYPES[16] = ::g::Uno::Exception_typeof();
    type->SetDependencies(
        ::g::Fuse::Controls::Native::Android::MotionEvent_typeof(),
        ::g::Fuse::Input::Pointer_typeof());
    type->SetFields(0,
        ::TYPES[11/*Uno.Collections.Dictionary<Java.Object, Fuse.Visual>*/], (uintptr_t)&InputDispatch::_listeners_, uFieldFlagsStatic,
        ::TYPES[12/*Uno.Collections.HashSet<int>*/], (uintptr_t)&InputDispatch::_activePointers_, uFieldFlagsStatic,
        ::g::Java::Object_typeof(), (uintptr_t)&InputDispatch::_touchListenerHandle_, uFieldFlagsStatic,
        ::g::Fuse::Controls::Native::Android::JavaMap_typeof(), (uintptr_t)&InputDispatch::_viewVisualMap_, uFieldFlagsStatic);
}

uClassType* InputDispatch_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.DependencyCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.Android.InputDispatch", options);
    type->fp_build_ = InputDispatch_build;
    type->fp_cctor_ = InputDispatch__cctor__fn;
    return type;
}

// public static void AddListener(Fuse.Controls.Native.ViewHandle viewHandle, Fuse.Visual owner) :167
void InputDispatch__AddListener_fn(::g::Fuse::Controls::Native::ViewHandle* viewHandle, ::g::Fuse::Visual* owner)
{
    InputDispatch::AddListener(viewHandle, owner);
}

// public static void AddListener(Java.Object nativeHandle, Fuse.Visual owner) :161
void InputDispatch__AddListener1_fn(::g::Java::Object* nativeHandle, ::g::Fuse::Visual* owner)
{
    InputDispatch::AddListener1(nativeHandle, owner);
}

// private static void ClearOnTouchListener(Java.Object viewHandle) :205
void InputDispatch__ClearOnTouchListener_fn(::g::Java::Object* viewHandle)
{
    InputDispatch::ClearOnTouchListener(viewHandle);
}

// private static Java.Object CreateTouchListener() :189
void InputDispatch__CreateTouchListener_fn(::g::Java::Object** __retval)
{
    *__retval = InputDispatch::CreateTouchListener();
}

// private static void DeactivatePointer(int pointerId) :92
void InputDispatch__DeactivatePointer_fn(int32_t* pointerId)
{
    InputDispatch::DeactivatePointer(*pointerId);
}

// private static Fuse.Visual FindRoot(Fuse.Visual visual) :183
void InputDispatch__FindRoot_fn(::g::Fuse::Visual* visual, ::g::Fuse::Visual** __retval)
{
    *__retval = InputDispatch::FindRoot(visual);
}

// private static bool IsPointerActive(int pointerId) :82
void InputDispatch__IsPointerActive_fn(int32_t* pointerId, bool* __retval)
{
    *__retval = InputDispatch::IsPointerActive(*pointerId);
}

// private static bool OnTouch(Java.Object view, Java.Object motionEvent) :24
void InputDispatch__OnTouch_fn(::g::Java::Object* view, ::g::Java::Object* motionEvent, bool* __retval)
{
    *__retval = InputDispatch::OnTouch(view, motionEvent);
}

// public static void RaiseEvent(Fuse.Visual visual, Java.Object viewHandle, Fuse.Controls.Native.Android.MotionEvent motionEvent) :39
void InputDispatch__RaiseEvent_fn(::g::Fuse::Visual* visual, ::g::Java::Object* viewHandle, ::g::Fuse::Controls::Native::Android::MotionEvent* motionEvent)
{
    InputDispatch::RaiseEvent(visual, viewHandle, motionEvent);
}

// private static void RaiseMoved(Fuse.Visual rootVisual, Fuse.Visual visual, Fuse.Input.PointerEventData data) :113
void InputDispatch__RaiseMoved_fn(::g::Fuse::Visual* rootVisual, ::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseMoved(rootVisual, visual, data);
}

// private static void RaisePressed(Fuse.Visual rootVisual, Fuse.Visual visual, Fuse.Input.PointerEventData data) :98
void InputDispatch__RaisePressed_fn(::g::Fuse::Visual* rootVisual, ::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaisePressed(rootVisual, visual, data);
}

// private static void RaiseReleased(Fuse.Visual rootVisual, Fuse.Visual visual, Fuse.Input.PointerEventData data) :125
void InputDispatch__RaiseReleased_fn(::g::Fuse::Visual* rootVisual, ::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseReleased(rootVisual, visual, data);
}

// public static void RemoveListener(Fuse.Controls.Native.ViewHandle viewHandle) :178
void InputDispatch__RemoveListener_fn(::g::Fuse::Controls::Native::ViewHandle* viewHandle)
{
    InputDispatch::RemoveListener(viewHandle);
}

// public static void RemoveListener(Java.Object nativeHandle) :172
void InputDispatch__RemoveListener1_fn(::g::Java::Object* nativeHandle)
{
    InputDispatch::RemoveListener1(nativeHandle);
}

// private static void SetOnTouchListener(Java.Object viewHandle, Java.Object listenerHandle) :199
void InputDispatch__SetOnTouchListener_fn(::g::Java::Object* viewHandle, ::g::Java::Object* listenerHandle)
{
    InputDispatch::SetOnTouchListener(viewHandle, listenerHandle);
}

// private static Java.Object get_TouchListener() :21
void InputDispatch__get_TouchListener_fn(::g::Java::Object** __retval)
{
    *__retval = InputDispatch::TouchListener();
}

// private static Fuse.Controls.Native.Android.JavaMap get_ViewVisualMap() :158
void InputDispatch__get_ViewVisualMap_fn(::g::Fuse::Controls::Native::Android::JavaMap** __retval)
{
    *__retval = InputDispatch::ViewVisualMap();
}

uSStrong< ::g::Uno::Collections::Dictionary*> InputDispatch::_listeners_;
uSStrong< ::g::Uno::Collections::HashSet*> InputDispatch::_activePointers_;
uSStrong< ::g::Java::Object*> InputDispatch::_touchListenerHandle_;
uSStrong< ::g::Fuse::Controls::Native::Android::JavaMap*> InputDispatch::_viewVisualMap_;

// public static void AddListener(Fuse.Controls.Native.ViewHandle viewHandle, Fuse.Visual owner) [static] :167
void InputDispatch::AddListener(::g::Fuse::Controls::Native::ViewHandle* viewHandle, ::g::Fuse::Visual* owner)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "AddListener(Fuse.Controls.Native.ViewHandle,Fuse.Visual)");
    InputDispatch_typeof()->Init();
    InputDispatch::AddListener1(uPtr(viewHandle)->NativeHandle, owner);
}

// public static void AddListener(Java.Object nativeHandle, Fuse.Visual owner) [static] :161
void InputDispatch::AddListener1(::g::Java::Object* nativeHandle, ::g::Fuse::Visual* owner)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "AddListener(Java.Object,Fuse.Visual)");
    InputDispatch_typeof()->Init();
    uPtr(InputDispatch::ViewVisualMap())->Put1(nativeHandle, owner);
    InputDispatch::SetOnTouchListener(nativeHandle, InputDispatch::TouchListener());
}

// private static void ClearOnTouchListener(Java.Object viewHandle) [static] :205
void InputDispatch::ClearOnTouchListener(::g::Java::Object* viewHandle)
{
    InputDispatch_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ClearOnTouchListener147", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object CreateTouchListener() [static] :189
::g::Java::Object* InputDispatch::CreateTouchListener()
{
    InputDispatch_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateTouchListener148", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void DeactivatePointer(int pointerId) [static] :92
void InputDispatch::DeactivatePointer(int32_t pointerId)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "DeactivatePointer(int)");
    InputDispatch_typeof()->Init();
    bool ret3;
    bool ret4;

    if ((::g::Uno::Collections::HashSet__Contains_fn(uPtr(InputDispatch::_activePointers_), uCRef<int32_t>(pointerId), &ret3), ret3))
        ::g::Uno::Collections::HashSet__Remove_fn(uPtr(InputDispatch::_activePointers_), uCRef<int32_t>(pointerId), &ret4);
}

// private static Fuse.Visual FindRoot(Fuse.Visual visual) [static] :183
::g::Fuse::Visual* InputDispatch::FindRoot(::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "FindRoot(Fuse.Visual)");
    InputDispatch_typeof()->Init();
    return (uPtr(visual)->Parent() != NULL) ? (::g::Fuse::Visual*)InputDispatch::FindRoot(uPtr(visual)->Parent()) : visual;
}

// private static bool IsPointerActive(int pointerId) [static] :82
bool InputDispatch::IsPointerActive(int32_t pointerId)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "IsPointerActive(int)");
    InputDispatch_typeof()->Init();
    bool ret5;
    bool ret6;

    if (!(::g::Uno::Collections::HashSet__Contains_fn(uPtr(InputDispatch::_activePointers_), uCRef<int32_t>(pointerId), &ret5), ret5))
    {
        ::g::Uno::Collections::HashSet__Add_fn(uPtr(InputDispatch::_activePointers_), uCRef<int32_t>(pointerId), &ret6);
        return false;
    }

    return true;
}

// private static bool OnTouch(Java.Object view, Java.Object motionEvent) [static] :24
bool InputDispatch::OnTouch(::g::Java::Object* view, ::g::Java::Object* motionEvent)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "OnTouch(Java.Object,Java.Object)");
    InputDispatch_typeof()->Init();

    if (uPtr(InputDispatch::ViewVisualMap())->ContainsKey(view))
    {
        ::g::Fuse::Controls::Native::Android::MotionEvent* me = ::g::Fuse::Controls::Native::Android::MotionEvent::New1(motionEvent);
        ::g::Fuse::Visual* visual = uCast< ::g::Fuse::Visual*>(uPtr(InputDispatch::ViewVisualMap())->Get(view), ::TYPES[13/*Fuse.Visual*/]);

        if (visual == NULL)
            return false;

        InputDispatch::RaiseEvent(visual, view, me);
    }

    return false;
}

// public static void RaiseEvent(Fuse.Visual visual, Java.Object viewHandle, Fuse.Controls.Native.Android.MotionEvent motionEvent) [static] :39
void InputDispatch::RaiseEvent(::g::Fuse::Visual* visual, ::g::Java::Object* viewHandle, ::g::Fuse::Controls::Native::Android::MotionEvent* motionEvent)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "RaiseEvent(Fuse.Visual,Java.Object,Fuse.Controls.Native.Android.MotionEvent)");
    InputDispatch_typeof()->Init();
    ::g::Fuse::Visual* rootVisual = InputDispatch::FindRoot(visual);
    ::g::Java::Object* rootView = NULL;
    ::g::Fuse::Controls::Native::NativeRootViewport* rootViewport = uAs< ::g::Fuse::Controls::Native::NativeRootViewport*>(rootVisual, ::TYPES[14/*Fuse.Controls.Native.NativeRootViewport*/]);

    if (rootViewport != NULL)
        rootView = uPtr(uPtr(rootViewport)->RootView())->NativeHandle;

    int32_t action = uPtr(motionEvent)->ActionMasked();
    uArray* data = motionEvent->PointerEventDataForView(rootView, viewHandle, ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(visual)->Viewport()), ::TYPES[15/*Fuse.ICommonViewport*/])));

    switch (action)
    {
        case 3:
        {
            for (int32_t i = 0; i < uPtr(data)->Length(); i++)
                InputDispatch::RaiseReleased(rootVisual, visual, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(i));

            break;
        }
        case 0:
        case 5:
        {
            for (int32_t i1 = 0; i1 < uPtr(data)->Length(); i1++)
                InputDispatch::RaisePressed(rootVisual, visual, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(i1));

            break;
        }
        case 2:
        {
            for (int32_t i2 = 0; i2 < uPtr(data)->Length(); i2++)
                InputDispatch::RaiseMoved(rootVisual, visual, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(i2));

            break;
        }
        case 1:
        case 6:
        {
            int32_t pointerMask = ::g::Fuse::Controls::Native::Android::MotionEvent::PointerIndexMask();
            int32_t pointerShit = ::g::Fuse::Controls::Native::Android::MotionEvent::PointerIndexShift();
            int32_t pointerIndex = (uPtr(motionEvent)->Action() & pointerMask) >> pointerShit;
            InputDispatch::RaiseReleased(rootVisual, visual, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(pointerIndex));
            break;
        }
    }
}

// private static void RaiseMoved(Fuse.Visual rootVisual, Fuse.Visual visual, Fuse.Input.PointerEventData data) [static] :113
void InputDispatch::RaiseMoved(::g::Fuse::Visual* rootVisual, ::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "RaiseMoved(Fuse.Visual,Fuse.Visual,Fuse.Input.PointerEventData)");
    InputDispatch_typeof()->Init();

    try
    {
        {
            ::g::Fuse::Input::Pointer::RaiseMoved(rootVisual, data);
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private static void RaisePressed(Fuse.Visual rootVisual, Fuse.Visual visual, Fuse.Input.PointerEventData data) [static] :98
void InputDispatch::RaisePressed(::g::Fuse::Visual* rootVisual, ::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "RaisePressed(Fuse.Visual,Fuse.Visual,Fuse.Input.PointerEventData)");
    InputDispatch_typeof()->Init();

    if (InputDispatch::IsPointerActive(uPtr(data)->PointIndex))
        return;

    try
    {
        {
            ::g::Fuse::Input::Pointer::RaisePressed(rootVisual, data);
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private static void RaiseReleased(Fuse.Visual rootVisual, Fuse.Visual visual, Fuse.Input.PointerEventData data) [static] :125
void InputDispatch::RaiseReleased(::g::Fuse::Visual* rootVisual, ::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "RaiseReleased(Fuse.Visual,Fuse.Visual,Fuse.Input.PointerEventData)");
    InputDispatch_typeof()->Init();
    InputDispatch::DeactivatePointer(uPtr(data)->PointIndex);

    try
    {
        {
            ::g::Fuse::Input::Pointer::RaiseReleased(rootVisual, data);
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// public static void RemoveListener(Fuse.Controls.Native.ViewHandle viewHandle) [static] :178
void InputDispatch::RemoveListener(::g::Fuse::Controls::Native::ViewHandle* viewHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "RemoveListener(Fuse.Controls.Native.ViewHandle)");
    InputDispatch_typeof()->Init();
    InputDispatch::RemoveListener1(uPtr(viewHandle)->NativeHandle);
}

// public static void RemoveListener(Java.Object nativeHandle) [static] :172
void InputDispatch::RemoveListener1(::g::Java::Object* nativeHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "RemoveListener(Java.Object)");
    InputDispatch_typeof()->Init();
    uPtr(InputDispatch::ViewVisualMap())->Remove(nativeHandle);
    InputDispatch::ClearOnTouchListener(nativeHandle);
}

// private static void SetOnTouchListener(Java.Object viewHandle, Java.Object listenerHandle) [static] :199
void InputDispatch::SetOnTouchListener(::g::Java::Object* viewHandle, ::g::Java::Object* listenerHandle)
{
    InputDispatch_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetOnTouchListener150", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ulistenerHandle=listenerHandle;
        jobject _listenerHandle = (_ulistenerHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ulistenerHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle,_listenerHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        if (_listenerHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_listenerHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object get_TouchListener() [static] :21
::g::Java::Object* InputDispatch::TouchListener()
{
    InputDispatch_typeof()->Init();
    ::g::Java::Object* ind1;
    ind1 = InputDispatch::_touchListenerHandle_;
    return (ind1 != NULL) ? ind1 : (::g::Java::Object*)(InputDispatch::_touchListenerHandle_ = InputDispatch::CreateTouchListener());
}

// private static Fuse.Controls.Native.Android.JavaMap get_ViewVisualMap() [static] :158
::g::Fuse::Controls::Native::Android::JavaMap* InputDispatch::ViewVisualMap()
{
    InputDispatch_typeof()->Init();
    ::g::Fuse::Controls::Native::Android::JavaMap* ind2;
    ind2 = InputDispatch::_viewVisualMap_;
    return (ind2 != NULL) ? ind2 : (::g::Fuse::Controls::Native::Android::JavaMap*)(InputDispatch::_viewVisualMap_ = ::g::Fuse::Controls::Native::Android::JavaMap::New1());
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.8.1\Android\InputDispatch.uno
// ----------------------------------------------------------------------------------------------------

// internal sealed extern class JavaMap :214
// {
static void JavaMap_build(uType* type)
{
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(JavaMap, _handle), 0);
}

uType* JavaMap_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(JavaMap);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.JavaMap", options);
    type->fp_build_ = JavaMap_build;
    type->fp_ctor_ = (void*)JavaMap__New1_fn;
    return type;
}

// public JavaMap() :218
void JavaMap__ctor__fn(JavaMap* __this)
{
    __this->ctor_();
}

// public bool ContainsKey(Java.Object key) :233
void JavaMap__ContainsKey_fn(JavaMap* __this, ::g::Java::Object* key, bool* __retval)
{
    *__retval = __this->ContainsKey(key);
}

// private static bool ContainsKey(Java.Object handle, Java.Object key) :266
void JavaMap__ContainsKey1_fn(::g::Java::Object* handle, ::g::Java::Object* key, bool* __retval)
{
    *__retval = JavaMap::ContainsKey1(handle, key);
}

// private static Java.Object Create() :244
void JavaMap__Create_fn(::g::Java::Object** __retval)
{
    *__retval = JavaMap::Create();
}

// public object Get(Java.Object key) :238
void JavaMap__Get_fn(JavaMap* __this, ::g::Java::Object* key, uObject** __retval)
{
    *__retval = __this->Get(key);
}

// private static object Get(Java.Object handle, Java.Object key) :274
void JavaMap__Get1_fn(::g::Java::Object* handle, ::g::Java::Object* key, uObject** __retval)
{
    *__retval = JavaMap::Get1(handle, key);
}

// public JavaMap New() :218
void JavaMap__New1_fn(JavaMap** __retval)
{
    *__retval = JavaMap::New1();
}

// private static void Put(Java.Object handle, Java.Object key, object value) :250
void JavaMap__Put_fn(::g::Java::Object* handle, ::g::Java::Object* key, uObject* value)
{
    JavaMap::Put(handle, key, value);
}

// public void Put(Java.Object key, object value) :223
void JavaMap__Put1_fn(JavaMap* __this, ::g::Java::Object* key, uObject* value)
{
    __this->Put1(key, value);
}

// public void Remove(Java.Object key) :228
void JavaMap__Remove_fn(JavaMap* __this, ::g::Java::Object* key)
{
    __this->Remove(key);
}

// private static void Remove(Java.Object handle, Java.Object key) :258
void JavaMap__Remove1_fn(::g::Java::Object* handle, ::g::Java::Object* key)
{
    JavaMap::Remove1(handle, key);
}

// public JavaMap() [instance] :218
void JavaMap::ctor_()
{
    _handle = JavaMap::Create();
}

// public bool ContainsKey(Java.Object key) [instance] :233
bool JavaMap::ContainsKey(::g::Java::Object* key)
{
    return JavaMap::ContainsKey1(_handle, key);
}

// public object Get(Java.Object key) [instance] :238
uObject* JavaMap::Get(::g::Java::Object* key)
{
    return JavaMap::Get1(_handle, key);
}

// public void Put(Java.Object key, object value) [instance] :223
void JavaMap::Put1(::g::Java::Object* key, uObject* value)
{
    JavaMap::Put(_handle, key, value);
}

// public void Remove(Java.Object key) [instance] :228
void JavaMap::Remove(::g::Java::Object* key)
{
    JavaMap::Remove1(_handle, key);
}

// private static bool ContainsKey(Java.Object handle, Java.Object key) [static] :266
bool JavaMap::ContainsKey1(::g::Java::Object* handle, ::g::Java::Object* key)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ContainsKey1151", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ukey=key;
        jobject _key = (_ukey==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ukey, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_handle,_key);
        bool __result = (bool)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_key!=NULL) { U_JNIVAR->DeleteLocalRef(_key); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object Create() [static] :244
::g::Java::Object* JavaMap::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create152", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static object Get(Java.Object handle, Java.Object key) [static] :274
uObject* JavaMap::Get1(::g::Java::Object* handle, ::g::Java::Object* key)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Get1153", "(Ljava/lang/Object;Ljava/lang/Object;)Lcom/uno/UnoObject;");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ukey=key;
        jobject _key = (_ukey==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ukey, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_handle,_key);
        uObject* __result = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBoxFreeingLocalRef(__jresult);
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_key!=NULL) { U_JNIVAR->DeleteLocalRef(_key); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public JavaMap New() [static] :218
JavaMap* JavaMap::New1()
{
    JavaMap* obj1 = (JavaMap*)uNew(JavaMap_typeof());
    obj1->ctor_();
    return obj1;
}

// private static void Put(Java.Object handle, Java.Object key, object value) [static] :250
void JavaMap::Put(::g::Java::Object* handle, ::g::Java::Object* key, uObject* value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Put154", "(Ljava/lang/Object;Ljava/lang/Object;Lcom/uno/UnoObject;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ukey=key;
        jobject _key = (_ukey==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ukey, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uObject* _uvalue=value;
        jobject _value = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uvalue);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_key,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_key!=NULL) { U_JNIVAR->DeleteLocalRef(_key); }
        if (_value!=NULL) { U_JNIVAR->DeleteLocalRef(_value); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void Remove(Java.Object handle, Java.Object key) [static] :258
void JavaMap::Remove1(::g::Java::Object* handle, ::g::Java::Object* key)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Remove1155", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ukey=key;
        jobject _key = (_ukey==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ukey, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_key);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_key!=NULL) { U_JNIVAR->DeleteLocalRef(_key); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.8.1\Android\LeafView.uno
// -----------------------------------------------------------------------------------------------

// public abstract extern class LeafView :7
// {
static void LeafView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(LeafView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(LeafView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(LeafView_type, interface2));
    type->SetFields(6);
}

LeafView_type* LeafView_typeof()
{
    static uSStrong<LeafView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::View_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(LeafView);
    options.TypeSize = sizeof(LeafView_type);
    type = (LeafView_type*)uClassType::New("Fuse.Controls.Native.Android.LeafView", options);
    type->fp_build_ = LeafView_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// protected LeafView(Java.Object handle) :9
void LeafView__ctor_7_fn(LeafView* __this, ::g::Java::Object* handle)
{
    __this->ctor_7(handle);
}

// protected LeafView(Java.Object handle, bool handlesInput) :11
void LeafView__ctor_8_fn(LeafView* __this, ::g::Java::Object* handle, bool* handlesInput)
{
    __this->ctor_8(handle, *handlesInput);
}

// protected LeafView(Java.Object handle) [instance] :9
void LeafView::ctor_7(::g::Java::Object* handle)
{
    ctor_5(handle, true);
}

// protected LeafView(Java.Object handle, bool handlesInput) [instance] :11
void LeafView::ctor_8(::g::Java::Object* handle, bool handlesInput)
{
    ctor_6(handle, true, handlesInput);
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.8.1\Android\InputDispatch.uno
// ----------------------------------------------------------------------------------------------------

// public sealed extern class MotionEvent :283
// {
// static generated MotionEvent() :283
static void MotionEvent__cctor__fn(uType* __type)
{
    MotionEvent::_locationOnScreen_ = uArray::New(::TYPES[17/*int[]*/], 2);
}

static void MotionEvent_build(uType* type)
{
    ::TYPES[17] = ::g::Uno::Int_typeof()->Array();
    ::TYPES[18] = ::g::Fuse::Input::PointerEventData_typeof()->Array();
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(MotionEvent, _handle), 0,
        ::TYPES[17/*int[]*/], (uintptr_t)&MotionEvent::_locationOnScreen_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(10,
        new uFunction("get_Action", NULL, (void*)MotionEvent__get_Action_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_ActionMasked", NULL, (void*)MotionEvent__get_ActionMasked_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_EventTime", NULL, (void*)MotionEvent__get_EventTime_fn, 0, false, ::g::Uno::Long_typeof(), 0),
        new uFunction("GetPointerId", NULL, (void*)MotionEvent__GetPointerId_fn, 0, false, ::g::Uno::Int_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("GetPosition", NULL, (void*)MotionEvent__GetPosition_fn, 0, false, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)MotionEvent__New1_fn, 0, true, type, 1, ::g::Java::Object_typeof()),
        new uFunction("get_PointerCount", NULL, (void*)MotionEvent__get_PointerCount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("PointerEventDataForView", NULL, (void*)MotionEvent__PointerEventDataForView_fn, 0, false, ::TYPES[18/*Fuse.Input.PointerEventData[]*/], 3, ::g::Java::Object_typeof(), ::g::Java::Object_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("get_PointerIndexMask", NULL, (void*)MotionEvent__get_PointerIndexMask_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_PointerIndexShift", NULL, (void*)MotionEvent__get_PointerIndexShift_fn, 0, true, ::g::Uno::Int_typeof(), 0));
}

uType* MotionEvent_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(MotionEvent);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.MotionEvent", options);
    type->fp_build_ = MotionEvent_build;
    type->fp_cctor_ = MotionEvent__cctor__fn;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))MotionEvent__Equals_fn;
    return type;
}

// public MotionEvent(Java.Object handle) :288
void MotionEvent__ctor__fn(MotionEvent* __this, ::g::Java::Object* handle)
{
    __this->ctor_(handle);
}

// public int get_Action() :305
void MotionEvent__get_Action_fn(MotionEvent* __this, int32_t* __retval)
{
    *__retval = __this->Action();
}

// public int get_ActionMasked() :300
void MotionEvent__get_ActionMasked_fn(MotionEvent* __this, int32_t* __retval)
{
    *__retval = __this->ActionMasked();
}

// private static bool Compare(Java.Object handle1, Java.Object handle2) :451
void MotionEvent__Compare_fn(::g::Java::Object* handle1, ::g::Java::Object* handle2, bool* __retval)
{
    *__retval = MotionEvent::Compare(handle1, handle2);
}

// public override sealed bool Equals(object obj) :346
void MotionEvent__Equals_fn(MotionEvent* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "Equals(object)");

    if (uIs(obj, __this->__type))
        return *__retval = MotionEvent::Compare(__this->_handle, uPtr(uCast<MotionEvent*>(obj, __this->__type))->_handle), void();
    else
        return *__retval = false, void();
}

// public long get_EventTime() :310
void MotionEvent__get_EventTime_fn(MotionEvent* __this, int64_t* __retval)
{
    *__retval = __this->EventTime();
}

// private int GetAction(Java.Object handle) :375
void MotionEvent__GetAction_fn(MotionEvent* __this, ::g::Java::Object* handle, int32_t* __retval)
{
    *__retval = __this->GetAction(handle);
}

// private int GetActionMasked(Java.Object handle) :387
void MotionEvent__GetActionMasked_fn(MotionEvent* __this, ::g::Java::Object* handle, int32_t* __retval)
{
    *__retval = __this->GetActionMasked(handle);
}

// private long GetEventTime(Java.Object handle) :393
void MotionEvent__GetEventTime_fn(MotionEvent* __this, ::g::Java::Object* handle, int64_t* __retval)
{
    *__retval = __this->GetEventTime(handle);
}

// private float2 GetLocationOnScreen(Java.Object viewHandle) :359
void MotionEvent__GetLocationOnScreen_fn(MotionEvent* __this, ::g::Java::Object* viewHandle, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetLocationOnScreen(viewHandle);
}

// private void GetLocationOnScreen(Java.Object viewHandle, int[] result) :366
void MotionEvent__GetLocationOnScreen1_fn(MotionEvent* __this, ::g::Java::Object* viewHandle, uArray* result)
{
    __this->GetLocationOnScreen1(viewHandle, result);
}

// private int GetPointerCount(Java.Object handle) :399
void MotionEvent__GetPointerCount_fn(MotionEvent* __this, ::g::Java::Object* handle, int32_t* __retval)
{
    *__retval = __this->GetPointerCount(handle);
}

// public int GetPointerId(int pointerIndex) :293
void MotionEvent__GetPointerId_fn(MotionEvent* __this, int32_t* pointerIndex, int32_t* __retval)
{
    *__retval = __this->GetPointerId(*pointerIndex);
}

// private int GetPointerId(Java.Object handle, int pointerIndex) :381
void MotionEvent__GetPointerId1_fn(MotionEvent* __this, ::g::Java::Object* handle, int32_t* pointerIndex, int32_t* __retval)
{
    *__retval = __this->GetPointerId1(handle, *pointerIndex);
}

// private static int GetPointerIndexMask() :439
void MotionEvent__GetPointerIndexMask_fn(int32_t* __retval)
{
    *__retval = MotionEvent::GetPointerIndexMask();
}

// private static int GetPointerIndexShift() :445
void MotionEvent__GetPointerIndexShift_fn(int32_t* __retval)
{
    *__retval = MotionEvent::GetPointerIndexShift();
}

// public float2 GetPosition(int pointerIndex) :318
void MotionEvent__GetPosition_fn(MotionEvent* __this, int32_t* pointerIndex, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetPosition(*pointerIndex);
}

// private float GetX(Java.Object handle, int pointerIndex) :405
void MotionEvent__GetX_fn(MotionEvent* __this, ::g::Java::Object* handle, int32_t* pointerIndex, float* __retval)
{
    *__retval = __this->GetX(handle, *pointerIndex);
}

// private float GetY(Java.Object handle, int pointerIndex) :411
void MotionEvent__GetY_fn(MotionEvent* __this, ::g::Java::Object* handle, int32_t* pointerIndex, float* __retval)
{
    *__retval = __this->GetY(handle, *pointerIndex);
}

// public MotionEvent New(Java.Object handle) :288
void MotionEvent__New1_fn(::g::Java::Object* handle, MotionEvent** __retval)
{
    *__retval = MotionEvent::New1(handle);
}

// public int get_PointerCount() :315
void MotionEvent__get_PointerCount_fn(MotionEvent* __this, int32_t* __retval)
{
    *__retval = __this->PointerCount();
}

// public Fuse.Input.PointerEventData[] PointerEventDataForView(Java.Object rootView, Java.Object view, float pointDensity) :323
void MotionEvent__PointerEventDataForView_fn(MotionEvent* __this, ::g::Java::Object* rootView, ::g::Java::Object* view, float* pointDensity, uArray** __retval)
{
    *__retval = __this->PointerEventDataForView(rootView, view, *pointDensity);
}

// public static int get_PointerIndexMask() :430
void MotionEvent__get_PointerIndexMask_fn(int32_t* __retval)
{
    *__retval = MotionEvent::PointerIndexMask();
}

// public static int get_PointerIndexShift() :435
void MotionEvent__get_PointerIndexShift_fn(int32_t* __retval)
{
    *__retval = MotionEvent::PointerIndexShift();
}

uSStrong<uArray*> MotionEvent::_locationOnScreen_;

// public MotionEvent(Java.Object handle) [instance] :288
void MotionEvent::ctor_(::g::Java::Object* handle)
{
    _handle = handle;
}

// public int get_Action() [instance] :305
int32_t MotionEvent::Action()
{
    return GetAction(_handle);
}

// public int get_ActionMasked() [instance] :300
int32_t MotionEvent::ActionMasked()
{
    return GetActionMasked(_handle);
}

// public long get_EventTime() [instance] :310
int64_t MotionEvent::EventTime()
{
    return GetEventTime(_handle);
}

// private int GetAction(Java.Object handle) [instance] :375
int32_t MotionEvent::GetAction(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetAction157", "(Lcom/uno/UnoObject;Ljava/lang/Object;)I");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_this_,_handle);
        int32_t __result = (int32_t)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private int GetActionMasked(Java.Object handle) [instance] :387
int32_t MotionEvent::GetActionMasked(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetActionMasked158", "(Lcom/uno/UnoObject;Ljava/lang/Object;)I");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_this_,_handle);
        int32_t __result = (int32_t)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private long GetEventTime(Java.Object handle) [instance] :393
int64_t MotionEvent::GetEventTime(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetEventTime159", "(Lcom/uno/UnoObject;Ljava/lang/Object;)J");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jlong __jresult = U_JNIVAR->CallStaticLongMethod(__cls,__mtd,_this_,_handle);
        int64_t __result = (int64_t)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private float2 GetLocationOnScreen(Java.Object viewHandle) [instance] :359
::g::Uno::Float2 MotionEvent::GetLocationOnScreen(::g::Java::Object* viewHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "GetLocationOnScreen(Java.Object)");
    GetLocationOnScreen1(viewHandle, MotionEvent::_locationOnScreen_);
    return ::g::Uno::Float2__New2((float)uPtr(MotionEvent::_locationOnScreen_)->Item<int32_t>(0), (float)uPtr(MotionEvent::_locationOnScreen_)->Item<int32_t>(1));
}

// private void GetLocationOnScreen(Java.Object viewHandle, int[] result) [instance] :366
void MotionEvent::GetLocationOnScreen1(::g::Java::Object* viewHandle, uArray* result)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLocationOnScreen1160", "(Lcom/uno/UnoObject;Ljava/lang/Object;Lcom/uno/IntArray;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uArray* _uresult=result;
        jobject _result = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box4(_uresult);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_viewHandle,_result);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        if (_result!=NULL) { U_JNIVAR->DeleteLocalRef(_result); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private int GetPointerCount(Java.Object handle) [instance] :399
int32_t MotionEvent::GetPointerCount(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetPointerCount161", "(Lcom/uno/UnoObject;Ljava/lang/Object;)I");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_this_,_handle);
        int32_t __result = (int32_t)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public int GetPointerId(int pointerIndex) [instance] :293
int32_t MotionEvent::GetPointerId(int32_t pointerIndex)
{
    return GetPointerId1(_handle, pointerIndex);
}

// private int GetPointerId(Java.Object handle, int pointerIndex) [instance] :381
int32_t MotionEvent::GetPointerId1(::g::Java::Object* handle, int32_t pointerIndex)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetPointerId1162", "(Lcom/uno/UnoObject;Ljava/lang/Object;I)I");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _upointerIndex=pointerIndex;
        jint _pointerIndex = (jint)_upointerIndex;
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_this_,_handle,_pointerIndex);
        int32_t __result = (int32_t)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public float2 GetPosition(int pointerIndex) [instance] :318
::g::Uno::Float2 MotionEvent::GetPosition(int32_t pointerIndex)
{
    return ::g::Uno::Float2__New2(GetX(_handle, pointerIndex), GetY(_handle, pointerIndex));
}

// private float GetX(Java.Object handle, int pointerIndex) [instance] :405
float MotionEvent::GetX(::g::Java::Object* handle, int32_t pointerIndex)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetX165", "(Lcom/uno/UnoObject;Ljava/lang/Object;I)F");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _upointerIndex=pointerIndex;
        jint _pointerIndex = (jint)_upointerIndex;
        jfloat __jresult = U_JNIVAR->CallStaticFloatMethod(__cls,__mtd,_this_,_handle,_pointerIndex);
        float __result = (float)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private float GetY(Java.Object handle, int pointerIndex) [instance] :411
float MotionEvent::GetY(::g::Java::Object* handle, int32_t pointerIndex)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetY167", "(Lcom/uno/UnoObject;Ljava/lang/Object;I)F");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _upointerIndex=pointerIndex;
        jint _pointerIndex = (jint)_upointerIndex;
        jfloat __jresult = U_JNIVAR->CallStaticFloatMethod(__cls,__mtd,_this_,_handle,_pointerIndex);
        float __result = (float)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public int get_PointerCount() [instance] :315
int32_t MotionEvent::PointerCount()
{
    return GetPointerCount(_handle);
}

// public Fuse.Input.PointerEventData[] PointerEventDataForView(Java.Object rootView, Java.Object view, float pointDensity) [instance] :323
uArray* MotionEvent::PointerEventDataForView(::g::Java::Object* rootView, ::g::Java::Object* view, float pointDensity)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "PointerEventDataForView(Java.Object,Java.Object,float)");
    ::g::Fuse::Input::PointerEventData* collection1;
    uArray* pointerEventData = uArray::New(::TYPES[18/*Fuse.Input.PointerEventData[]*/], PointerCount());
    ::g::Uno::Float2 locationOnScreen = ::g::Uno::Float2__op_Subtraction2(GetLocationOnScreen(view), GetLocationOnScreen(rootView));

    for (int32_t i = 0; i < pointerEventData->Length(); i++)
    {
        ::g::Uno::Float2 windowPoint = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Addition2(locationOnScreen, GetPosition(i)), pointDensity);
        int32_t pointerId = GetPointerId(i);
        uPtr(pointerEventData)->Strong< ::g::Fuse::Input::PointerEventData*>(i) = (collection1 = ::g::Fuse::Input::PointerEventData::New1(), uPtr(collection1)->PointIndex = pointerId, uPtr(collection1)->WindowPoint = windowPoint, uPtr(collection1)->Timestamp = (((double)EventTime() / 1000.0) - ::g::Fuse::Time::FrameTimeBase()), uPtr(collection1)->PointerType = 2, uPtr(collection1)->IsPrimary = (pointerId == 0), collection1);
    }

    return pointerEventData;
}

// private static bool Compare(Java.Object handle1, Java.Object handle2) [static] :451
bool MotionEvent::Compare(::g::Java::Object* handle1, ::g::Java::Object* handle2)
{
    MotionEvent_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Compare156", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
        ::g::Java::Object* _uhandle1=handle1;
        jobject _handle1 = (_uhandle1==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle1, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uhandle2=handle2;
        jobject _handle2 = (_uhandle2==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle2, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_handle1,_handle2);
        bool __result = (bool)__jresult;
        if (_handle1!=NULL) { U_JNIVAR->DeleteLocalRef(_handle1); }
        if (_handle2!=NULL) { U_JNIVAR->DeleteLocalRef(_handle2); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetPointerIndexMask() [static] :439
int32_t MotionEvent::GetPointerIndexMask()
{
    MotionEvent_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetPointerIndexMask163", "()I");
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd);
        int32_t __result = (int32_t)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetPointerIndexShift() [static] :445
int32_t MotionEvent::GetPointerIndexShift()
{
    MotionEvent_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetPointerIndexShift164", "()I");
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd);
        int32_t __result = (int32_t)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public MotionEvent New(Java.Object handle) [static] :288
MotionEvent* MotionEvent::New1(::g::Java::Object* handle)
{
    MotionEvent* obj2 = (MotionEvent*)uNew(MotionEvent_typeof());
    obj2->ctor_(handle);
    return obj2;
}

// public static int get_PointerIndexMask() [static] :430
int32_t MotionEvent::PointerIndexMask()
{
    MotionEvent_typeof()->Init();
    return MotionEvent::GetPointerIndexMask();
}

// public static int get_PointerIndexShift() [static] :435
int32_t MotionEvent::PointerIndexShift()
{
    MotionEvent_typeof()->Init();
    return MotionEvent::GetPointerIndexShift();
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.8.1\Android\ScrollView.uno
// -------------------------------------------------------------------------------------------------

// public sealed extern class ScrollView :13
// {
static void ScrollView_build(uType* type)
{
    ::TYPES[19] = ::g::Fuse::Controls::Native::IScrollViewHost_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ScrollView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(ScrollView_type, interface1),
        ::g::Fuse::Controls::Native::IScrollView_typeof(), offsetof(ScrollView_type, interface2));
    type->SetFields(6,
        ::g::Java::Object_typeof(), offsetof(ScrollView, _callbackHandle), 0,
        ::TYPES[19/*Fuse.Controls.Native.IScrollViewHost*/], offsetof(ScrollView, _host), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("set_AllowedScrollDirections", NULL, (void*)ScrollView__set_AllowedScrollDirections_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::ScrollDirections_typeof()),
        new uFunction(".ctor", NULL, (void*)ScrollView__New5_fn, 0, true, type, 1, ::TYPES[19/*Fuse.Controls.Native.IScrollViewHost*/]),
        new uFunction("set_ScrollPosition", NULL, (void*)ScrollView__set_ScrollPosition_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()));
}

ScrollView_type* ScrollView_typeof()
{
    static uSStrong<ScrollView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::View_typeof();
    options.FieldCount = 8;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ScrollView);
    options.TypeSize = sizeof(ScrollView_type);
    type = (ScrollView_type*)uClassType::New("Fuse.Controls.Native.Android.ScrollView", options);
    type->fp_build_ = ScrollView_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))ScrollView__Dispose_fn;
    type->interface2.fp_set_ScrollPosition = (void(*)(uObject*, ::g::Uno::Float2*))ScrollView__set_ScrollPosition_fn;
    type->interface2.fp_set_AllowedScrollDirections = (void(*)(uObject*, int32_t*))ScrollView__set_AllowedScrollDirections_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ScrollView__Dispose_fn;
    return type;
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host) :20
void ScrollView__ctor_7_fn(ScrollView* __this, uObject* host)
{
    __this->ctor_7(host);
}

// private Java.Object AddCallback(Java.Object handle) :39
void ScrollView__AddCallback_fn(ScrollView* __this, ::g::Java::Object* handle, ::g::Java::Object** __retval)
{
    *__retval = __this->AddCallback(handle);
}

// public void set_AllowedScrollDirections(Fuse.Controls.ScrollDirections value) :52
void ScrollView__set_AllowedScrollDirections_fn(ScrollView* __this, int32_t* value)
{
    __this->AllowedScrollDirections(*value);
}

// private static Java.Object Create() :33
void ScrollView__Create_fn(::g::Java::Object** __retval)
{
    *__retval = ScrollView::Create();
}

// public override sealed void Dispose() :26
void ScrollView__Dispose_fn(ScrollView* __this)
{
    __this->_host = NULL;
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host) :20
void ScrollView__New5_fn(uObject* host, ScrollView** __retval)
{
    *__retval = ScrollView::New5(host);
}

// private void OnScrollChanged(int x, int y, int oldx, int oldy) :64
void ScrollView__OnScrollChanged_fn(ScrollView* __this, int32_t* x, int32_t* y, int32_t* oldx, int32_t* oldy)
{
    __this->OnScrollChanged(*x, *y, *oldx, *oldy);
}

// public void set_ScrollPosition(float2 value) :57
void ScrollView__set_ScrollPosition_fn(ScrollView* __this, ::g::Uno::Float2* value)
{
    __this->ScrollPosition(*value);
}

// private static void SetScrollPosition(Java.Object handle, int x, int y) :79
void ScrollView__SetScrollPosition_fn(::g::Java::Object* handle, int32_t* x, int32_t* y)
{
    ScrollView::SetScrollPosition(handle, *x, *y);
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host) [instance] :20
void ScrollView::ctor_7(uObject* host)
{
    ctor_4(ScrollView::Create());
    _host = host;
    _callbackHandle = AddCallback(Handle());
}

// private Java.Object AddCallback(Java.Object handle) [instance] :39
::g::Java::Object* ScrollView::AddCallback(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddCallback169", "(Lcom/uno/UnoObject;Ljava/lang/Object;)Ljava/lang/Object;");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_this_,_handle);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public void set_AllowedScrollDirections(Fuse.Controls.ScrollDirections value) [instance] :52
void ScrollView::AllowedScrollDirections(int32_t value)
{
}

// private void OnScrollChanged(int x, int y, int oldx, int oldy) [instance] :64
void ScrollView::OnScrollChanged(int32_t x, int32_t y, int32_t oldx, int32_t oldy)
{
    uStackFrame __("Fuse.Controls.Native.Android.ScrollView", "OnScrollChanged(int,int,int,int)");
    float p = ::g::Fuse::Controls::Native::IScrollViewHost::PixelsPerPoint(uInterface(uPtr(_host), ::TYPES[19/*Fuse.Controls.Native.IScrollViewHost*/]));
    ::g::Fuse::Controls::Native::IScrollViewHost::OnScrollPositionChanged(uInterface(uPtr(_host), ::TYPES[19/*Fuse.Controls.Native.IScrollViewHost*/]), ::g::Uno::Float2__New2((float)x / p, (float)y / p));
}

// public void set_ScrollPosition(float2 value) [instance] :57
void ScrollView::ScrollPosition(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Controls.Native.Android.ScrollView", "set_ScrollPosition(float2)");
    ::g::Uno::Int2 x = ::g::Uno::Int2__op_Explicit1(::g::Uno::Float2__op_Multiply1(value, ::g::Fuse::Controls::Native::IScrollViewHost::PixelsPerPoint(uInterface(uPtr(_host), ::TYPES[19/*Fuse.Controls.Native.IScrollViewHost*/]))));
    ScrollView::SetScrollPosition(Handle(), x.X, x.Y);
}

// private static Java.Object Create() [static] :33
::g::Java::Object* ScrollView::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create171", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host) [static] :20
ScrollView* ScrollView::New5(uObject* host)
{
    ScrollView* obj1 = (ScrollView*)uNew(ScrollView_typeof());
    obj1->ctor_7(host);
    return obj1;
}

// private static void SetScrollPosition(Java.Object handle, int x, int y) [static] :79
void ScrollView::SetScrollPosition(::g::Java::Object* handle, int32_t x, int32_t y)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetScrollPosition173", "(Ljava/lang/Object;II)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _ux=x;
        jint _x = (jint)_ux;
        int32_t _uy=y;
        jint _y = (jint)_uy;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_x,_y);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.8.1\Android\Slider.uno
// ---------------------------------------------------------------------------------------------

// public sealed extern class Slider :15
// {
static void Slider_build(uType* type)
{
    ::TYPES[20] = ::g::Fuse::Controls::Native::IRangeViewHost_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Slider_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Slider_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(Slider_type, interface2),
        ::g::Fuse::Controls::Native::IRangeView_typeof(), offsetof(Slider_type, interface3));
    type->SetFields(6,
        ::TYPES[20/*Fuse.Controls.Native.IRangeViewHost*/], offsetof(Slider, _host), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)Slider__New5_fn, 0, true, type, 1, ::TYPES[20/*Fuse.Controls.Native.IRangeViewHost*/]),
        new uFunction("set_Progress", NULL, (void*)Slider__set_Progress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
}

Slider_type* Slider_typeof()
{
    static uSStrong<Slider_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::LeafView_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Slider);
    options.TypeSize = sizeof(Slider_type);
    type = (Slider_type*)uClassType::New("Fuse.Controls.Native.Android.Slider", options);
    type->fp_build_ = Slider_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))Slider__Dispose_fn;
    type->interface3.fp_set_Progress = (void(*)(uObject*, double*))Slider__set_Progress_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Slider__Dispose_fn;
    return type;
}

// public Slider(Fuse.Controls.Native.IRangeViewHost host) :26
void Slider__ctor_9_fn(Slider* __this, uObject* host)
{
    __this->ctor_9(host);
}

// private void AddChangedCallback(Java.Object handle) :47
void Slider__AddChangedCallback_fn(Slider* __this, ::g::Java::Object* handle)
{
    __this->AddChangedCallback(handle);
}

// private static Java.Object Create() :33
void Slider__Create_fn(::g::Java::Object** __retval)
{
    *__retval = Slider::Create();
}

// public override sealed void Dispose() :72
void Slider__Dispose_fn(Slider* __this)
{
    __this->_host = NULL;
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
}

// public Slider New(Fuse.Controls.Native.IRangeViewHost host) :26
void Slider__New5_fn(uObject* host, Slider** __retval)
{
    *__retval = Slider::New5(host);
}

// private void OnSeekBarChanged(double rel, bool fromUser) :58
void Slider__OnSeekBarChanged_fn(Slider* __this, double* rel, bool* fromUser)
{
    __this->OnSeekBarChanged(*rel, *fromUser);
}

// public void set_Progress(double value) :20
void Slider__set_Progress_fn(Slider* __this, double* value)
{
    __this->Progress(*value);
}

// private static void SetProgress(Java.Object handle, double progress) :41
void Slider__SetProgress_fn(::g::Java::Object* handle, double* progress)
{
    Slider::SetProgress(handle, *progress);
}

// public Slider(Fuse.Controls.Native.IRangeViewHost host) [instance] :26
void Slider::ctor_9(uObject* host)
{
    ctor_8(Slider::Create(), true);
    _host = host;
    AddChangedCallback(Handle());
}

// private void AddChangedCallback(Java.Object handle) [instance] :47
void Slider::AddChangedCallback(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddChangedCallback174", "(Lcom/uno/UnoObject;Ljava/lang/Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void OnSeekBarChanged(double rel, bool fromUser) [instance] :58
void Slider::OnSeekBarChanged(double rel, bool fromUser)
{
    uStackFrame __("Fuse.Controls.Native.Android.Slider", "OnSeekBarChanged(double,bool)");

    if (fromUser)
    {
        double us = ::g::Fuse::Controls::Native::IRangeViewHost::RelativeUserStep(uInterface(uPtr(_host), ::TYPES[20/*Fuse.Controls.Native.IRangeViewHost*/]));

        if (us > 0.0)
        {
            rel = ::g::Uno::Math::Round(rel / us) * us;
            Slider::SetProgress(Handle(), rel * 1000.0);
        }
    }

    ::g::Fuse::Controls::Native::IRangeViewHost::OnProgressChanged(uInterface(uPtr(_host), ::TYPES[20/*Fuse.Controls.Native.IRangeViewHost*/]), rel);
}

// public void set_Progress(double value) [instance] :20
void Slider::Progress(double value)
{
    Slider::SetProgress(Handle(), value);
}

// private static Java.Object Create() [static] :33
::g::Java::Object* Slider::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create176", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public Slider New(Fuse.Controls.Native.IRangeViewHost host) [static] :26
Slider* Slider::New5(uObject* host)
{
    Slider* obj1 = (Slider*)uNew(Slider_typeof());
    obj1->ctor_9(host);
    return obj1;
}

// private static void SetProgress(Java.Object handle, double progress) [static] :41
void Slider::SetProgress(::g::Java::Object* handle, double progress)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetProgress177", "(Ljava/lang/Object;D)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        double _uprogress=progress;
        jdouble _progress = (jdouble)_uprogress;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_progress);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.8.1\Android\TextEdit.uno
// -----------------------------------------------------------------------------------------------

// internal static extern class SoftKeyboard :530
// {
static void SoftKeyboard_build(uType* type)
{
}

uClassType* SoftKeyboard_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.Android.SoftKeyboard", options);
    type->fp_build_ = SoftKeyboard_build;
    return type;
}

// public static void HideKeyboard(Java.Object hideKeyboardContext, Java.Object hideKeyboardWindowToken) :534
void SoftKeyboard__HideKeyboard_fn(::g::Java::Object* hideKeyboardContext, ::g::Java::Object* hideKeyboardWindowToken)
{
    SoftKeyboard::HideKeyboard(hideKeyboardContext, hideKeyboardWindowToken);
}

// public static void ShowKeyboard(Java.Object viewHandle) :543
void SoftKeyboard__ShowKeyboard_fn(::g::Java::Object* viewHandle)
{
    SoftKeyboard::ShowKeyboard(viewHandle);
}

// public static void HideKeyboard(Java.Object hideKeyboardContext, Java.Object hideKeyboardWindowToken) [static] :534
void SoftKeyboard::HideKeyboard(::g::Java::Object* hideKeyboardContext, ::g::Java::Object* hideKeyboardWindowToken)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "HideKeyboard178", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uhideKeyboardContext=hideKeyboardContext;
        jobject _hideKeyboardContext = (_uhideKeyboardContext==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhideKeyboardContext, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uhideKeyboardWindowToken=hideKeyboardWindowToken;
        jobject _hideKeyboardWindowToken = (_uhideKeyboardWindowToken==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhideKeyboardWindowToken, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_hideKeyboardContext,_hideKeyboardWindowToken);
        
        if (_hideKeyboardContext!=NULL) { U_JNIVAR->DeleteLocalRef(_hideKeyboardContext); }
        if (_hideKeyboardWindowToken!=NULL) { U_JNIVAR->DeleteLocalRef(_hideKeyboardWindowToken); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void ShowKeyboard(Java.Object viewHandle) [static] :543
void SoftKeyboard::ShowKeyboard(::g::Java::Object* viewHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ShowKeyboard179", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.8.1\Android\SurfaceView.uno
// --------------------------------------------------------------------------------------------------

// public sealed extern class SurfaceView :8
// {
static void SurfaceView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsViewBase_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsViewBase_type, interface1),
        ::g::Fuse::Controls::Native::IGraphicsView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsViewBase_type, interface2),
        ::g::Fuse::Controls::Native::IViewHost_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsViewBase_type, interface3));
    type->SetFields(10);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SurfaceView__New5_fn, 0, true, type, 0));
}

::g::Fuse::Controls::Native::Android::GraphicsViewBase_type* SurfaceView_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Native::Android::GraphicsViewBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::GraphicsViewBase_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(SurfaceView);
    options.TypeSize = sizeof(::g::Fuse::Controls::Native::Android::GraphicsViewBase_type);
    type = (::g::Fuse::Controls::Native::Android::GraphicsViewBase_type*)uClassType::New("Fuse.Controls.Native.Android.SurfaceView", options);
    type->fp_build_ = SurfaceView_build;
    type->fp_ctor_ = (void*)SurfaceView__New5_fn;
    type->interface3.fp_Insert = (void(*)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*))::g::Fuse::Controls::Native::Android::GraphicsViewBase__FuseControlsNativeIViewHostInsert_fn;
    type->interface3.fp_Remove = (void(*)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*))::g::Fuse::Controls::Native::Android::GraphicsViewBase__FuseControlsNativeIViewHostRemove_fn;
    type->interface2.fp_BeginDraw = (void(*)(uObject*, ::g::Uno::Int2*, bool*))::g::Fuse::Controls::Native::Android::GraphicsViewBase__BeginDraw_fn;
    type->interface2.fp_EndDraw = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::GraphicsViewBase__EndDraw_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// public SurfaceView() :10
void SurfaceView__ctor_8_fn(SurfaceView* __this)
{
    __this->ctor_8();
}

// private void AddCallback(Java.Object handle) :33
void SurfaceView__AddCallback_fn(SurfaceView* __this, ::g::Java::Object* handle)
{
    __this->AddCallback(handle);
}

// private static Java.Object Create() :52
void SurfaceView__Create_fn(::g::Java::Object** __retval)
{
    *__retval = SurfaceView::Create();
}

// private static Java.Object GetSurface(Java.Object holder) :27
void SurfaceView__GetSurface_fn(::g::Java::Object* holder, ::g::Java::Object** __retval)
{
    *__retval = SurfaceView::GetSurface(holder);
}

// public SurfaceView New() :10
void SurfaceView__New5_fn(SurfaceView** __retval)
{
    *__retval = SurfaceView::New5();
}

// private void OnSurfaceChanged(Java.Object holder, int f, int w, int h) :16
void SurfaceView__OnSurfaceChanged_fn(SurfaceView* __this, ::g::Java::Object* holder, int32_t* f, int32_t* w, int32_t* h)
{
    __this->OnSurfaceChanged(holder, *f, *w, *h);
}

// private void OnSurfaceCreated(Java.Object holder) :17
void SurfaceView__OnSurfaceCreated_fn(SurfaceView* __this, ::g::Java::Object* holder)
{
    __this->OnSurfaceCreated(holder);
}

// private void OnSurfaceDestroyed(Java.Object holder) :21
void SurfaceView__OnSurfaceDestroyed_fn(SurfaceView* __this, ::g::Java::Object* holder)
{
    __this->OnSurfaceDestroyed(holder);
}

// private void OnSurfaceRedrawNeeded(Java.Object holder) :15
void SurfaceView__OnSurfaceRedrawNeeded_fn(SurfaceView* __this, ::g::Java::Object* holder)
{
    __this->OnSurfaceRedrawNeeded(holder);
}

// public SurfaceView() [instance] :10
void SurfaceView::ctor_8()
{
    ctor_7(SurfaceView::Create());
    AddCallback(GraphicsViewHandle());
}

// private void AddCallback(Java.Object handle) [instance] :33
void SurfaceView::AddCallback(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddCallback180", "(Lcom/uno/UnoObject;Ljava/lang/Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void OnSurfaceChanged(Java.Object holder, int f, int w, int h) [instance] :16
void SurfaceView::OnSurfaceChanged(::g::Java::Object* holder, int32_t f, int32_t w, int32_t h)
{
}

// private void OnSurfaceCreated(Java.Object holder) [instance] :17
void SurfaceView::OnSurfaceCreated(::g::Java::Object* holder)
{
    uStackFrame __("Fuse.Controls.Native.Android.SurfaceView", "OnSurfaceCreated(Java.Object)");
    SetSurface(SurfaceView::GetSurface(holder));
}

// private void OnSurfaceDestroyed(Java.Object holder) [instance] :21
void SurfaceView::OnSurfaceDestroyed(::g::Java::Object* holder)
{
    DestroySurface();
}

// private void OnSurfaceRedrawNeeded(Java.Object holder) [instance] :15
void SurfaceView::OnSurfaceRedrawNeeded(::g::Java::Object* holder)
{
}

// private static Java.Object Create() [static] :52
::g::Java::Object* SurfaceView::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create185", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object GetSurface(Java.Object holder) [static] :27
::g::Java::Object* SurfaceView::GetSurface(::g::Java::Object* holder)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetSurface186", "(Ljava/lang/Object;)Ljava/lang/Object;");
        ::g::Java::Object* _uholder=holder;
        jobject _holder = (_uholder==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uholder, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_holder);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_holder!=NULL) { U_JNIVAR->DeleteLocalRef(_holder); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public SurfaceView New() [static] :10
SurfaceView* SurfaceView::New5()
{
    SurfaceView* obj1 = (SurfaceView*)uNew(SurfaceView_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.8.1\Android\Switch.uno
// ---------------------------------------------------------------------------------------------

// public sealed extern class Switch :17
// {
static void Switch_build(uType* type)
{
    ::TYPES[21] = ::g::Fuse::Controls::Native::IToggleViewHost_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Switch_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Switch_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(Switch_type, interface2),
        ::g::Fuse::Controls::Native::IToggleView_typeof(), offsetof(Switch_type, interface3));
    type->SetFields(6,
        ::TYPES[21/*Fuse.Controls.Native.IToggleViewHost*/], offsetof(Switch, _host), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)Switch__New5_fn, 0, true, type, 1, ::TYPES[21/*Fuse.Controls.Native.IToggleViewHost*/]),
        new uFunction("set_Value", NULL, (void*)Switch__set_Value_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
}

Switch_type* Switch_typeof()
{
    static uSStrong<Switch_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::LeafView_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Switch);
    options.TypeSize = sizeof(Switch_type);
    type = (Switch_type*)uClassType::New("Fuse.Controls.Native.Android.Switch", options);
    type->fp_build_ = Switch_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))Switch__Dispose_fn;
    type->interface3.fp_set_Value = (void(*)(uObject*, bool*))Switch__set_Value_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Switch__Dispose_fn;
    return type;
}

// public Switch(Fuse.Controls.Native.IToggleViewHost host) :27
void Switch__ctor_9_fn(Switch* __this, uObject* host)
{
    __this->ctor_9(host);
}

// private void AddCallback(Java.Object handle) :40
void Switch__AddCallback_fn(Switch* __this, ::g::Java::Object* handle)
{
    __this->AddCallback(handle);
}

// private static Java.Object Create() :34
void Switch__Create_fn(::g::Java::Object** __retval)
{
    *__retval = Switch::Create();
}

// public override sealed void Dispose() :60
void Switch__Dispose_fn(Switch* __this)
{
    __this->_host = NULL;
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
}

// public Switch New(Fuse.Controls.Native.IToggleViewHost host) :27
void Switch__New5_fn(uObject* host, Switch** __retval)
{
    *__retval = Switch::New5(host);
}

// private void OnToggleChanged(bool value) :55
void Switch__OnToggleChanged_fn(Switch* __this, bool* value)
{
    __this->OnToggleChanged(*value);
}

// private static void SetValue(Java.Object handle, bool value) :50
void Switch__SetValue_fn(::g::Java::Object* handle, bool* value)
{
    Switch::SetValue(handle, *value);
}

// public void set_Value(bool value) :21
void Switch__set_Value_fn(Switch* __this, bool* value)
{
    __this->Value(*value);
}

// public Switch(Fuse.Controls.Native.IToggleViewHost host) [instance] :27
void Switch::ctor_9(uObject* host)
{
    ctor_8(Switch::Create(), true);
    _host = host;
    AddCallback(Handle());
}

// private void AddCallback(Java.Object handle) [instance] :40
void Switch::AddCallback(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddCallback187", "(Lcom/uno/UnoObject;Ljava/lang/Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void OnToggleChanged(bool value) [instance] :55
void Switch::OnToggleChanged(bool value)
{
    uStackFrame __("Fuse.Controls.Native.Android.Switch", "OnToggleChanged(bool)");
    ::g::Fuse::Controls::Native::IToggleViewHost::OnValueChanged(uInterface(uPtr(_host), ::TYPES[21/*Fuse.Controls.Native.IToggleViewHost*/]), value);
}

// public void set_Value(bool value) [instance] :21
void Switch::Value(bool value)
{
    Switch::SetValue(Handle(), value);
}

// private static Java.Object Create() [static] :34
::g::Java::Object* Switch::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create189", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public Switch New(Fuse.Controls.Native.IToggleViewHost host) [static] :27
Switch* Switch::New5(uObject* host)
{
    Switch* obj1 = (Switch*)uNew(Switch_typeof());
    obj1->ctor_9(host);
    return obj1;
}

// private static void SetValue(Java.Object handle, bool value) [static] :50
void Switch::SetValue(::g::Java::Object* handle, bool value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetValue190", "(Ljava/lang/Object;Z)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _uvalue=value;
        jboolean _value = (jboolean)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.8.1\Android\TextEdit.uno
// -----------------------------------------------------------------------------------------------

// public sealed extern class TextEdit :7
// {
static void TextEdit_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput_type, interface2),
        ::g::Fuse::Controls::Native::ITextView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput_type, interface3),
        ::g::Fuse::Controls::Native::ITextEdit_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput_type, interface4));
    type->SetFields(15);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TextEdit__New8_fn, 0, true, type, 2, ::g::Fuse::Controls::Native::ITextEditHost_typeof(), ::g::Uno::Bool_typeof()));
}

::g::Fuse::Controls::Native::Android::TextInput_type* TextEdit_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Native::Android::TextInput_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::TextInput_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(TextEdit);
    options.TypeSize = sizeof(::g::Fuse::Controls::Native::Android::TextInput_type);
    type = (::g::Fuse::Controls::Native::Android::TextInput_type*)uClassType::New("Fuse.Controls.Native.Android.TextEdit", options);
    type->fp_build_ = TextEdit_build;
    type->interface4.fp_FocusGained = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::TextInput__FuseControlsNativeITextEditFocusGained_fn;
    type->interface4.fp_FocusLost = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::TextInput__FuseControlsNativeITextEditFocusLost_fn;
    type->interface4.fp_set_IsMultiline = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::TextInput__set_IsMultiline_fn;
    type->interface4.fp_set_IsPassword = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::TextInput__set_IsPassword_fn;
    type->interface4.fp_set_IsReadOnly = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::TextInput__set_IsReadOnly_fn;
    type->interface4.fp_set_InputHint = (void(*)(uObject*, int32_t*))::g::Fuse::Controls::Native::Android::TextInput__set_InputHint_fn;
    type->interface4.fp_set_CaretColor = (void(*)(uObject*, ::g::Uno::Float4*))::g::Fuse::Controls::Native::Android::TextInput__set_CaretColor_fn;
    type->interface4.fp_set_SelectionColor = (void(*)(uObject*, ::g::Uno::Float4*))::g::Fuse::Controls::Native::Android::TextInput__set_SelectionColor_fn;
    type->interface4.fp_set_ActionStyle = (void(*)(uObject*, int32_t*))::g::Fuse::Controls::Native::Android::TextInput__set_ActionStyle_fn;
    type->interface4.fp_set_AutoCorrectHint = (void(*)(uObject*, int32_t*))::g::Fuse::Controls::Native::Android::TextInput__set_AutoCorrectHint_fn;
    type->interface4.fp_set_AutoCapitalizationHint = (void(*)(uObject*, int32_t*))::g::Fuse::Controls::Native::Android::TextInput__set_AutoCapitalizationHint_fn;
    type->interface4.fp_set_PlaceholderText = (void(*)(uObject*, uString*))::g::Fuse::Controls::Native::Android::TextInput__set_PlaceholderText_fn;
    type->interface4.fp_set_PlaceholderColor = (void(*)(uObject*, ::g::Uno::Float4*))::g::Fuse::Controls::Native::Android::TextInput__set_PlaceholderColor_fn;
    type->interface3.fp_set_Value = (void(*)(uObject*, uString*))::g::Fuse::Controls::Native::Android::TextView__set_Value_fn;
    type->interface3.fp_set_MaxLength = (void(*)(uObject*, int32_t*))::g::Fuse::Controls::Native::Android::TextView__set_MaxLength_fn;
    type->interface3.fp_set_TextWrapping = (void(*)(uObject*, int32_t*))::g::Fuse::Controls::Native::Android::TextView__set_TextWrapping_fn;
    type->interface3.fp_set_LineSpacing = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::TextView__set_LineSpacing_fn;
    type->interface3.fp_set_FontSize = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::TextView__set_FontSize_fn;
    type->interface3.fp_set_Font = (void(*)(uObject*, ::g::Fuse::Font*))::g::Fuse::Controls::Native::Android::TextView__set_Font_fn;
    type->interface3.fp_set_TextAlignment = (void(*)(uObject*, int32_t*))::g::Fuse::Controls::Native::Android::TextView__set_TextAlignment_fn;
    type->interface3.fp_set_TextColor = (void(*)(uObject*, ::g::Uno::Float4*))::g::Fuse::Controls::Native::Android::TextView__set_TextColor_fn;
    type->interface3.fp_set_TextTruncation = (void(*)(uObject*, int32_t*))::g::Fuse::Controls::Native::Android::TextView__set_TextTruncation_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::TextInput__Dispose_fn;
    return type;
}

// public TextEdit(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) :9
void TextEdit__ctor_12_fn(TextEdit* __this, uObject* host, bool* isMultiline)
{
    __this->ctor_12(host, *isMultiline);
}

// private static void MakeItPlain(Java.Object handle) :15
void TextEdit__MakeItPlain_fn(::g::Java::Object* handle)
{
    TextEdit::MakeItPlain(handle);
}

// public TextEdit New(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) :9
void TextEdit__New8_fn(uObject* host, bool* isMultiline, TextEdit** __retval)
{
    *__retval = TextEdit::New8(host, *isMultiline);
}

// public TextEdit(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) [instance] :9
void TextEdit::ctor_12(uObject* host, bool isMultiline)
{
    ctor_11(host, isMultiline);
    TextEdit::MakeItPlain(Handle());
}

// private static void MakeItPlain(Java.Object handle) [static] :15
void TextEdit::MakeItPlain(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "MakeItPlain191", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public TextEdit New(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) [static] :9
TextEdit* TextEdit::New8(uObject* host, bool isMultiline)
{
    TextEdit* obj1 = (TextEdit*)uNew(TextEdit_typeof());
    obj1->ctor_12(host, isMultiline);
    return obj1;
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.8.1\Android\TextEdit.uno
// -----------------------------------------------------------------------------------------------

// public extern class TextInput :27
// {
static void TextInput_build(uType* type)
{
    ::TYPES[22] = ::g::Uno::Action2_typeof()->MakeType(::g::Java::Object_typeof(), ::g::Uno::Bool_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::IDisposable_typeof();
    ::TYPES[17] = ::g::Uno::Int_typeof()->Array();
    ::TYPES[23] = ::g::Fuse::Controls::Native::ITextEditHost_typeof();
    ::TYPES[1] = ::g::Uno::Action_typeof();
    type->SetDependencies(
        ::g::Uno::Color_typeof(),
        ::g::Fuse::Controls::Native::Android::FocusManager_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::TYPES[9/*Uno.IDisposable*/], offsetof(TextInput_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(TextInput_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(TextInput_type, interface2),
        ::g::Fuse::Controls::Native::ITextView_typeof(), offsetof(TextInput_type, interface3),
        ::g::Fuse::Controls::Native::ITextEdit_typeof(), offsetof(TextInput_type, interface4));
    type->SetFields(6,
        ::TYPES[23/*Fuse.Controls.Native.ITextEditHost*/], offsetof(TextInput, _host), 0,
        ::TYPES[9/*Uno.IDisposable*/], offsetof(TextInput, _focusEvent), 0,
        ::g::Uno::Bool_typeof(), offsetof(TextInput, _isMultiline), 0,
        ::g::Uno::Bool_typeof(), offsetof(TextInput, _isPassword), 0,
        ::g::Uno::Bool_typeof(), offsetof(TextInput, _isReadOnly), 0,
        ::g::Fuse::Controls::AutoCorrectHint_typeof(), offsetof(TextInput, _autoCorrentHint), 0,
        ::g::Fuse::Controls::AutoCapitalizationHint_typeof(), offsetof(TextInput, _autoCapitalizationHint), 0,
        ::g::Fuse::Controls::TextInputHint_typeof(), offsetof(TextInput, _inputHint), 0,
        ::g::Fuse::Controls::TextInputActionStyle_typeof(), offsetof(TextInput, _actionStyle), 0);
    type->Reflection.SetFunctions(12,
        new uFunction("set_ActionStyle", NULL, (void*)TextInput__set_ActionStyle_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::TextInputActionStyle_typeof()),
        new uFunction("set_AutoCapitalizationHint", NULL, (void*)TextInput__set_AutoCapitalizationHint_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::AutoCapitalizationHint_typeof()),
        new uFunction("set_AutoCorrectHint", NULL, (void*)TextInput__set_AutoCorrectHint_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::AutoCorrectHint_typeof()),
        new uFunction("set_CaretColor", NULL, (void*)TextInput__set_CaretColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("set_InputHint", NULL, (void*)TextInput__set_InputHint_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::TextInputHint_typeof()),
        new uFunction("set_IsMultiline", NULL, (void*)TextInput__set_IsMultiline_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("set_IsPassword", NULL, (void*)TextInput__set_IsPassword_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("set_IsReadOnly", NULL, (void*)TextInput__set_IsReadOnly_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)TextInput__New7_fn, 0, true, type, 2, ::TYPES[23/*Fuse.Controls.Native.ITextEditHost*/], ::g::Uno::Bool_typeof()),
        new uFunction("set_PlaceholderColor", NULL, (void*)TextInput__set_PlaceholderColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("set_PlaceholderText", NULL, (void*)TextInput__set_PlaceholderText_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("set_SelectionColor", NULL, (void*)TextInput__set_SelectionColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()));
}

TextInput_type* TextInput_typeof()
{
    static uSStrong<TextInput_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::TextView_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 5;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(TextInput);
    options.TypeSize = sizeof(TextInput_type);
    type = (TextInput_type*)uClassType::New("Fuse.Controls.Native.Android.TextInput", options);
    type->fp_build_ = TextInput_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))TextInput__Dispose_fn;
    type->fp_Measure = (void(*)(::g::Fuse::Controls::Native::ViewHandle*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))TextInput__Measure_fn;
    type->interface4.fp_FocusGained = (void(*)(uObject*))TextInput__FuseControlsNativeITextEditFocusGained_fn;
    type->interface4.fp_FocusLost = (void(*)(uObject*))TextInput__FuseControlsNativeITextEditFocusLost_fn;
    type->interface4.fp_set_IsMultiline = (void(*)(uObject*, bool*))TextInput__set_IsMultiline_fn;
    type->interface4.fp_set_IsPassword = (void(*)(uObject*, bool*))TextInput__set_IsPassword_fn;
    type->interface4.fp_set_IsReadOnly = (void(*)(uObject*, bool*))TextInput__set_IsReadOnly_fn;
    type->interface4.fp_set_InputHint = (void(*)(uObject*, int32_t*))TextInput__set_InputHint_fn;
    type->interface4.fp_set_CaretColor = (void(*)(uObject*, ::g::Uno::Float4*))TextInput__set_CaretColor_fn;
    type->interface4.fp_set_SelectionColor = (void(*)(uObject*, ::g::Uno::Float4*))TextInput__set_SelectionColor_fn;
    type->interface4.fp_set_ActionStyle = (void(*)(uObject*, int32_t*))TextInput__set_ActionStyle_fn;
    type->interface4.fp_set_AutoCorrectHint = (void(*)(uObject*, int32_t*))TextInput__set_AutoCorrectHint_fn;
    type->interface4.fp_set_AutoCapitalizationHint = (void(*)(uObject*, int32_t*))TextInput__set_AutoCapitalizationHint_fn;
    type->interface4.fp_set_PlaceholderText = (void(*)(uObject*, uString*))TextInput__set_PlaceholderText_fn;
    type->interface4.fp_set_PlaceholderColor = (void(*)(uObject*, ::g::Uno::Float4*))TextInput__set_PlaceholderColor_fn;
    type->interface3.fp_set_Value = (void(*)(uObject*, uString*))::g::Fuse::Controls::Native::Android::TextView__set_Value_fn;
    type->interface3.fp_set_MaxLength = (void(*)(uObject*, int32_t*))::g::Fuse::Controls::Native::Android::TextView__set_MaxLength_fn;
    type->interface3.fp_set_TextWrapping = (void(*)(uObject*, int32_t*))::g::Fuse::Controls::Native::Android::TextView__set_TextWrapping_fn;
    type->interface3.fp_set_LineSpacing = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::TextView__set_LineSpacing_fn;
    type->interface3.fp_set_FontSize = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::TextView__set_FontSize_fn;
    type->interface3.fp_set_Font = (void(*)(uObject*, ::g::Fuse::Font*))::g::Fuse::Controls::Native::Android::TextView__set_Font_fn;
    type->interface3.fp_set_TextAlignment = (void(*)(uObject*, int32_t*))::g::Fuse::Controls::Native::Android::TextView__set_TextAlignment_fn;
    type->interface3.fp_set_TextColor = (void(*)(uObject*, ::g::Uno::Float4*))::g::Fuse::Controls::Native::Android::TextView__set_TextColor_fn;
    type->interface3.fp_set_TextTruncation = (void(*)(uObject*, int32_t*))::g::Fuse::Controls::Native::Android::TextView__set_TextTruncation_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))TextInput__Dispose_fn;
    return type;
}

// public TextInput(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) :31
void TextInput__ctor_11_fn(TextInput* __this, uObject* host, bool* isMultiline)
{
    __this->ctor_11(host, *isMultiline);
}

// public void set_ActionStyle(Fuse.Controls.TextInputActionStyle value) :166
void TextInput__set_ActionStyle_fn(TextInput* __this, int32_t* value)
{
    __this->ActionStyle(*value);
}

// private void AddEditorActionListener(Java.Object handle) :448
void TextInput__AddEditorActionListener_fn(TextInput* __this, ::g::Java::Object* handle)
{
    __this->AddEditorActionListener(handle);
}

// private void AddTextChangedListener(Java.Object handle) :377
void TextInput__AddTextChangedListener_fn(TextInput* __this, ::g::Java::Object* handle)
{
    __this->AddTextChangedListener(handle);
}

// public void set_AutoCapitalizationHint(Fuse.Controls.AutoCapitalizationHint value) :146
void TextInput__set_AutoCapitalizationHint_fn(TextInput* __this, int32_t* value)
{
    __this->AutoCapitalizationHint(*value);
}

// public void set_AutoCorrectHint(Fuse.Controls.AutoCorrectHint value) :136
void TextInput__set_AutoCorrectHint_fn(TextInput* __this, int32_t* value)
{
    __this->AutoCorrectHint(*value);
}

// public void set_CaretColor(float4 value) :261
void TextInput__set_CaretColor_fn(TextInput* __this, ::g::Uno::Float4* value)
{
    __this->CaretColor(*value);
}

// private static Java.Object Create() :343
void TextInput__Create1_fn(::g::Java::Object** __retval)
{
    *__retval = TextInput::Create1();
}

// public override sealed void Dispose() :65
void TextInput__Dispose_fn(TextInput* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "Dispose()");
    __this->_host = NULL;
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_focusEvent), ::TYPES[9/*Uno.IDisposable*/]));
    __this->_focusEvent = NULL;
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
}

// private void Fuse.Controls.Native.ITextEdit.FocusGained() :73
void TextInput__FuseControlsNativeITextEditFocusGained_fn(TextInput* __this)
{
    TextInput::RequestFocus(__this->Handle());
}

// private void Fuse.Controls.Native.ITextEdit.FocusLost() :78
void TextInput__FuseControlsNativeITextEditFocusLost_fn(TextInput* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "Fuse.Controls.Native.ITextEdit.FocusLost()");

    if (TextInput::HasFocus(__this->Handle()))
        __this->ScheduleFocusLoss();
}

// private static bool HasFocus(Java.Object viewHandle) :85
void TextInput__HasFocus_fn(::g::Java::Object* viewHandle, bool* __retval)
{
    *__retval = TextInput::HasFocus(viewHandle);
}

// public void set_InputHint(Fuse.Controls.TextInputHint value) :156
void TextInput__set_InputHint_fn(TextInput* __this, int32_t* value)
{
    __this->InputHint(*value);
}

// public void set_IsMultiline(bool value) :106
void TextInput__set_IsMultiline_fn(TextInput* __this, bool* value)
{
    __this->IsMultiline(*value);
}

// public void set_IsPassword(bool value) :116
void TextInput__set_IsPassword_fn(TextInput* __this, bool* value)
{
    __this->IsPassword(*value);
}

// public void set_IsReadOnly(bool value) :126
void TextInput__set_IsReadOnly_fn(TextInput* __this, bool* value)
{
    __this->IsReadOnly(*value);
}

// public override sealed float2 Measure(Fuse.LayoutParams lp, float density) :394
void TextInput__Measure_fn(TextInput* __this, ::g::Fuse::LayoutParams* lp, float* density, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "Measure(Fuse.LayoutParams,float)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    float density_ = *density;
    ::g::Uno::Float2 ret2;

    if (__this->_isMultiline)
    {
        ::g::Java::Object* handle = __this->NativeHandle;
        uArray* measuredSize = uArray::New(::TYPES[17/*int[]*/], 2);
        TextInput::Measure2(handle, (int32_t)(lp_.X() * density_), (int32_t)(lp_.Y() * density_), lp_.HasX(), lp_.HasY(), measuredSize);
        return *__retval = ::g::Uno::Float2__New2((float)measuredSize->Item<int32_t>(0) / density_, (float)measuredSize->Item<int32_t>(1) / density_), void();
    }
    else
        return *__retval = (::g::Fuse::Controls::Native::ViewHandle__Measure_fn(__this, uCRef(lp_), uCRef(density_), &ret2), ret2), void();
}

// private static void Measure(Java.Object handle, int w, int h, bool hasX, bool hasY, int[] measuredSize) :410
void TextInput__Measure2_fn(::g::Java::Object* handle, int32_t* w, int32_t* h, bool* hasX, bool* hasY, uArray* measuredSize)
{
    TextInput::Measure2(handle, *w, *h, *hasX, *hasY, measuredSize);
}

// public TextInput New(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) :31
void TextInput__New7_fn(uObject* host, bool* isMultiline, TextInput** __retval)
{
    *__retval = TextInput::New7(host, *isMultiline);
}

// private bool OnEditorAction(int actionCode) :462
void TextInput__OnEditorAction_fn(TextInput* __this, int32_t* actionCode, bool* __retval)
{
    *__retval = __this->OnEditorAction(*actionCode);
}

// private void OnNativeFocusChanged(Java.Object view, bool hasFocus) :40
void TextInput__OnNativeFocusChanged_fn(TextInput* __this, ::g::Java::Object* view, bool* hasFocus)
{
    __this->OnNativeFocusChanged(view, *hasFocus);
}

// private void OnTextChanged(string value) :457
void TextInput__OnTextChanged_fn(TextInput* __this, uString* value)
{
    __this->OnTextChanged(value);
}

// public void set_PlaceholderColor(float4 value) :276
void TextInput__set_PlaceholderColor_fn(TextInput* __this, ::g::Uno::Float4* value)
{
    __this->PlaceholderColor(*value);
}

// public void set_PlaceholderText(string value) :271
void TextInput__set_PlaceholderText_fn(TextInput* __this, uString* value)
{
    __this->PlaceholderText(value);
}

// private static void RequestFocus(Java.Object viewHandle) :91
void TextInput__RequestFocus_fn(::g::Java::Object* viewHandle)
{
    TextInput::RequestFocus(viewHandle);
}

// private int get_ReturnKeyType() :293
void TextInput__get_ReturnKeyType_fn(TextInput* __this, int32_t* __retval)
{
    *__retval = __this->ReturnKeyType();
}

// private void ScheduleFocusLoss() :55
void TextInput__ScheduleFocusLoss_fn(TextInput* __this)
{
    __this->ScheduleFocusLoss();
}

// public void set_SelectionColor(float4 value) :266
void TextInput__set_SelectionColor_fn(TextInput* __this, ::g::Uno::Float4* value)
{
    __this->SelectionColor(*value);
}

// private void SetCursorDrawableColor(Java.Object handle, int color) :349
void TextInput__SetCursorDrawableColor_fn(TextInput* __this, ::g::Java::Object* handle, int32_t* color)
{
    __this->SetCursorDrawableColor(handle, *color);
}

// private static void SetImeOptions(Java.Object handle, int value) :337
void TextInput__SetImeOptions_fn(::g::Java::Object* handle, int32_t* value)
{
    TextInput::SetImeOptions(handle, *value);
}

// private static void SetInputType(Java.Object handle, int value) :314
void TextInput__SetInputType_fn(::g::Java::Object* handle, int32_t* value)
{
    TextInput::SetInputType(handle, *value);
}

// private static void SetPlaceholderColor(Java.Object handle, int value) :280
void TextInput__SetPlaceholderColor_fn(::g::Java::Object* handle, int32_t* value)
{
    TextInput::SetPlaceholderColor(handle, *value);
}

// private static void SetPlaceholderText(Java.Object handle, string value) :286
void TextInput__SetPlaceholderText_fn(::g::Java::Object* handle, uString* value)
{
    TextInput::SetPlaceholderText(handle, value);
}

// private static void SetSelectionColor(Java.Object handle, int color) :308
void TextInput__SetSelectionColor_fn(::g::Java::Object* handle, int32_t* color)
{
    TextInput::SetSelectionColor(handle, *color);
}

// private void UpdateFlags() :173
void TextInput__UpdateFlags_fn(TextInput* __this)
{
    __this->UpdateFlags();
}

// public TextInput(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) [instance] :31
void TextInput::ctor_11(uObject* host, bool isMultiline)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", ".ctor(Fuse.Controls.Native.ITextEditHost,bool)");
    ctor_10(TextInput::Create1());
    _host = host;
    IsMultiline(isMultiline);
    AddEditorActionListener(Handle());
    _focusEvent = ::g::Fuse::Controls::Native::Android::FocusChangedListener::AddHandler(Handle(), uDelegate::New(::TYPES[22/*Uno.Action<Java.Object, bool>*/], (void*)TextInput__OnNativeFocusChanged_fn, this));
    AddTextChangedListener(Handle());
}

// public void set_ActionStyle(Fuse.Controls.TextInputActionStyle value) [instance] :166
void TextInput::ActionStyle(int32_t value)
{
    _actionStyle = value;
    UpdateFlags();
}

// private void AddEditorActionListener(Java.Object handle) [instance] :448
void TextInput::AddEditorActionListener(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddEditorActionListener192", "(Lcom/uno/UnoObject;Ljava/lang/Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void AddTextChangedListener(Java.Object handle) [instance] :377
void TextInput::AddTextChangedListener(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddTextChangedListener194", "(Lcom/uno/UnoObject;Ljava/lang/Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public void set_AutoCapitalizationHint(Fuse.Controls.AutoCapitalizationHint value) [instance] :146
void TextInput::AutoCapitalizationHint(int32_t value)
{
    _autoCapitalizationHint = value;
    UpdateFlags();
}

// public void set_AutoCorrectHint(Fuse.Controls.AutoCorrectHint value) [instance] :136
void TextInput::AutoCorrectHint(int32_t value)
{
    _autoCorrentHint = value;
    UpdateFlags();
}

// public void set_CaretColor(float4 value) [instance] :261
void TextInput::CaretColor(::g::Uno::Float4 value)
{
    SetCursorDrawableColor(Handle(), (int32_t)::g::Uno::Color::ToArgb(value));
}

// public void set_InputHint(Fuse.Controls.TextInputHint value) [instance] :156
void TextInput::InputHint(int32_t value)
{
    _inputHint = value;
    UpdateFlags();
}

// public void set_IsMultiline(bool value) [instance] :106
void TextInput::IsMultiline(bool value)
{
    _isMultiline = value;
    UpdateFlags();
}

// public void set_IsPassword(bool value) [instance] :116
void TextInput::IsPassword(bool value)
{
    _isPassword = value;
    UpdateFlags();
}

// public void set_IsReadOnly(bool value) [instance] :126
void TextInput::IsReadOnly(bool value)
{
    _isReadOnly = value;
    UpdateFlags();
}

// private bool OnEditorAction(int actionCode) [instance] :462
bool TextInput::OnEditorAction(int32_t actionCode)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "OnEditorAction(int)");

    switch (actionCode)
    {
        case 6:
        case 5:
        case 2:
        case 3:
        case 4:
            return ::g::Fuse::Controls::Native::ITextEditHost::OnInputAction(uInterface(uPtr(_host), ::TYPES[23/*Fuse.Controls.Native.ITextEditHost*/]), 0);
    }

    return false;
}

// private void OnNativeFocusChanged(Java.Object view, bool hasFocus) [instance] :40
void TextInput::OnNativeFocusChanged(::g::Java::Object* view, bool hasFocus)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "OnNativeFocusChanged(Java.Object,bool)");

    if (!hasFocus)
    {
        ::g::Fuse::Controls::Native::ITextEditHost::OnFocusLost(uInterface(uPtr(_host), ::TYPES[23/*Fuse.Controls.Native.ITextEditHost*/]));
        ScheduleFocusLoss();
    }
    else
    {
        ::g::Fuse::Controls::Native::ITextEditHost::OnFocusGained(uInterface(uPtr(_host), ::TYPES[23/*Fuse.Controls.Native.ITextEditHost*/]));
        uPtr(::g::Fuse::Controls::Native::Android::FocusManager::Singleton())->HideKeyboardContext = NULL;
        ::g::Fuse::Controls::Native::Android::SoftKeyboard::ShowKeyboard(Handle());
    }
}

// private void OnTextChanged(string value) [instance] :457
void TextInput::OnTextChanged(uString* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "OnTextChanged(string)");
    ::g::Fuse::Controls::Native::ITextEditHost::OnValueChanged(uInterface(uPtr(_host), ::TYPES[23/*Fuse.Controls.Native.ITextEditHost*/]), value);
}

// public void set_PlaceholderColor(float4 value) [instance] :276
void TextInput::PlaceholderColor(::g::Uno::Float4 value)
{
    TextInput::SetPlaceholderColor(Handle(), (int32_t)::g::Uno::Color::ToArgb(value));
}

// public void set_PlaceholderText(string value) [instance] :271
void TextInput::PlaceholderText(uString* value)
{
    TextInput::SetPlaceholderText(Handle(), value);
}

// private int get_ReturnKeyType() [instance] :293
int32_t TextInput::ReturnKeyType()
{
    switch (_actionStyle)
    {
        case 1:
            return 6;
        case 2:
            return 5;
        case 3:
            return 2;
        case 4:
            return 3;
        case 5:
            return 4;
    }

    return 0;
}

// private void ScheduleFocusLoss() [instance] :55
void TextInput::ScheduleFocusLoss()
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "ScheduleFocusLoss()");
    uPtr(::g::Fuse::Controls::Native::Android::FocusManager::Singleton())->LoseFocus = Handle();
    uPtr(::g::Fuse::Controls::Native::Android::FocusManager::Singleton())->HideKeyboardContext = ::g::Fuse::Controls::Native::Android::FocusManager::GetContext(Handle());
    uPtr(::g::Fuse::Controls::Native::Android::FocusManager::Singleton())->HideKeyboardWindowToken = ::g::Fuse::Controls::Native::Android::FocusManager::GetWindowToken(Handle());
    ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)::g::Fuse::Controls::Native::Android::FocusManager__CompleteFocusLoss_fn, uPtr(::g::Fuse::Controls::Native::Android::FocusManager::Singleton())), -1, 2);
}

// public void set_SelectionColor(float4 value) [instance] :266
void TextInput::SelectionColor(::g::Uno::Float4 value)
{
    TextInput::SetSelectionColor(Handle(), (int32_t)::g::Uno::Color::ToArgb(value));
}

// private void SetCursorDrawableColor(Java.Object handle, int color) [instance] :349
void TextInput::SetCursorDrawableColor(::g::Java::Object* handle, int32_t color)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetCursorDrawableColor201", "(Lcom/uno/UnoObject;Ljava/lang/Object;I)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _ucolor=color;
        jint _color = (jint)_ucolor;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle,_color);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void UpdateFlags() [instance] :173
void TextInput::UpdateFlags()
{
    int32_t flags = 0;

    switch (_inputHint)
    {
        case 1:
        {
            flags = flags | 33;
            break;
        }
        case 2:
        {
            flags = flags | 17;
            break;
        }
        case 3:
        {
            flags = flags | 3;
            break;
        }
        case 4:
        {
            flags = flags | 2;
            break;
        }
        case 5:
        {
            flags = flags | 8194;
            break;
        }
        default:
        {
            flags = flags | 1;

            switch (_autoCorrentHint)
            {
                case 0:
                {
                    flags = flags | 32768;
                    break;
                }
                case 1:
                    break;
                case 2:
                {
                    flags = flags | 32768;
                    break;
                }
            }

            switch (_autoCapitalizationHint)
            {
                case 0:
                    break;
                case 1:
                {
                    flags = flags | 4096;
                    break;
                }
                case 2:
                {
                    flags = flags | 8192;
                    break;
                }
                case 3:
                {
                    flags = flags | 16384;
                    break;
                }
            }

            break;
        }
    }

    if (_isMultiline)
        flags = flags | 131072;

    if (_isPassword)
        flags = flags | 128;

    if (_isReadOnly)
        TextInput::SetInputType(Handle(), 0);
    else
    {
        TextInput::SetInputType(Handle(), flags);
        TextInput::SetImeOptions(Handle(), ReturnKeyType());
    }
}

// private static Java.Object Create() [static] :343
::g::Java::Object* TextInput::Create1()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create1197", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static bool HasFocus(Java.Object viewHandle) [static] :85
bool TextInput::HasFocus(::g::Java::Object* viewHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "HasFocus198", "(Ljava/lang/Object;)Z");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_viewHandle);
        bool __result = (bool)__jresult;
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void Measure(Java.Object handle, int w, int h, bool hasX, bool hasY, int[] measuredSize) [static] :410
void TextInput::Measure2(::g::Java::Object* handle, int32_t w, int32_t h, bool hasX, bool hasY, uArray* measuredSize)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Measure2199", "(Ljava/lang/Object;IIZZLcom/uno/IntArray;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _uw=w;
        jint _w = (jint)_uw;
        int32_t _uh=h;
        jint _h = (jint)_uh;
        bool _uhasX=hasX;
        jboolean _hasX = (jboolean)_uhasX;
        bool _uhasY=hasY;
        jboolean _hasY = (jboolean)_uhasY;
        uArray* _umeasuredSize=measuredSize;
        jobject _measuredSize = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box4(_umeasuredSize);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_w,_h,_hasX,_hasY,_measuredSize);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        
        
        if (_measuredSize!=NULL) { U_JNIVAR->DeleteLocalRef(_measuredSize); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public TextInput New(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) [static] :31
TextInput* TextInput::New7(uObject* host, bool isMultiline)
{
    TextInput* obj1 = (TextInput*)uNew(TextInput_typeof());
    obj1->ctor_11(host, isMultiline);
    return obj1;
}

// private static void RequestFocus(Java.Object viewHandle) [static] :91
void TextInput::RequestFocus(::g::Java::Object* viewHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "RequestFocus200", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetImeOptions(Java.Object handle, int value) [static] :337
void TextInput::SetImeOptions(::g::Java::Object* handle, int32_t value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetImeOptions202", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _uvalue=value;
        jint _value = (jint)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetInputType(Java.Object handle, int value) [static] :314
void TextInput::SetInputType(::g::Java::Object* handle, int32_t value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetInputType203", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _uvalue=value;
        jint _value = (jint)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetPlaceholderColor(Java.Object handle, int value) [static] :280
void TextInput::SetPlaceholderColor(::g::Java::Object* handle, int32_t value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetPlaceholderColor204", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _uvalue=value;
        jint _value = (jint)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetPlaceholderText(Java.Object handle, string value) [static] :286
void TextInput::SetPlaceholderText(::g::Java::Object* handle, uString* value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetPlaceholderText205", "(Ljava/lang/Object;Ljava/lang/String;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uString* _uvalue=value;
        jstring _value = JniHelper::UnoToJavaString(_uvalue);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_value!=NULL) { U_JNIVAR->DeleteLocalRef(_value); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetSelectionColor(Java.Object handle, int color) [static] :308
void TextInput::SetSelectionColor(::g::Java::Object* handle, int32_t color)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetSelectionColor206", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _ucolor=color;
        jint _color = (jint)_ucolor;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_color);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.8.1\Android\TextureView.uno
// --------------------------------------------------------------------------------------------------

// public sealed extern class TextureView :7
// {
static void TextureView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsViewBase_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsViewBase_type, interface1),
        ::g::Fuse::Controls::Native::IGraphicsView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsViewBase_type, interface2),
        ::g::Fuse::Controls::Native::IViewHost_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsViewBase_type, interface3));
    type->SetFields(10);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TextureView__New5_fn, 0, true, type, 0));
}

::g::Fuse::Controls::Native::Android::GraphicsViewBase_type* TextureView_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Native::Android::GraphicsViewBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::GraphicsViewBase_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(TextureView);
    options.TypeSize = sizeof(::g::Fuse::Controls::Native::Android::GraphicsViewBase_type);
    type = (::g::Fuse::Controls::Native::Android::GraphicsViewBase_type*)uClassType::New("Fuse.Controls.Native.Android.TextureView", options);
    type->fp_build_ = TextureView_build;
    type->fp_ctor_ = (void*)TextureView__New5_fn;
    type->interface3.fp_Insert = (void(*)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*))::g::Fuse::Controls::Native::Android::GraphicsViewBase__FuseControlsNativeIViewHostInsert_fn;
    type->interface3.fp_Remove = (void(*)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*))::g::Fuse::Controls::Native::Android::GraphicsViewBase__FuseControlsNativeIViewHostRemove_fn;
    type->interface2.fp_BeginDraw = (void(*)(uObject*, ::g::Uno::Int2*, bool*))::g::Fuse::Controls::Native::Android::GraphicsViewBase__BeginDraw_fn;
    type->interface2.fp_EndDraw = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::GraphicsViewBase__EndDraw_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// public TextureView() :9
void TextureView__ctor_8_fn(TextureView* __this)
{
    __this->ctor_8();
}

// private static Java.Object Create() :45
void TextureView__Create_fn(::g::Java::Object** __retval)
{
    *__retval = TextureView::Create();
}

// private void InstallSurfaceListener(Java.Object handle) :25
void TextureView__InstallSurfaceListener_fn(TextureView* __this, ::g::Java::Object* handle)
{
    __this->InstallSurfaceListener(handle);
}

// public TextureView New() :9
void TextureView__New5_fn(TextureView** __retval)
{
    *__retval = TextureView::New5();
}

// private void OnSurfaceTextureAvailable(Java.Object surface) :14
void TextureView__OnSurfaceTextureAvailable_fn(TextureView* __this, ::g::Java::Object* surface)
{
    __this->OnSurfaceTextureAvailable(surface);
}

// private void OnSurfaceTextureDestroyed() :19
void TextureView__OnSurfaceTextureDestroyed_fn(TextureView* __this)
{
    __this->OnSurfaceTextureDestroyed();
}

// public TextureView() [instance] :9
void TextureView::ctor_8()
{
    ctor_7(TextureView::Create());
    InstallSurfaceListener(GraphicsViewHandle());
}

// private void InstallSurfaceListener(Java.Object handle) [instance] :25
void TextureView::InstallSurfaceListener(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "InstallSurfaceListener208", "(Lcom/uno/UnoObject;Ljava/lang/Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void OnSurfaceTextureAvailable(Java.Object surface) [instance] :14
void TextureView::OnSurfaceTextureAvailable(::g::Java::Object* surface)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextureView", "OnSurfaceTextureAvailable(Java.Object)");
    SetSurface(surface);
}

// private void OnSurfaceTextureDestroyed() [instance] :19
void TextureView::OnSurfaceTextureDestroyed()
{
    DestroySurface();
}

// private static Java.Object Create() [static] :45
::g::Java::Object* TextureView::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create207", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public TextureView New() [static] :9
TextureView* TextureView::New5()
{
    TextureView* obj1 = (TextureView*)uNew(TextureView_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.8.1\Android\TextView.uno
// -----------------------------------------------------------------------------------------------

// public extern class TextView :8
// {
static void TextView_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Color_typeof(),
        ::g::Fuse::Font_typeof(),
        ::g::Fuse::Controls::Native::Android::TypefaceCache_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(TextView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(TextView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(TextView_type, interface2),
        ::g::Fuse::Controls::Native::ITextView_typeof(), offsetof(TextView_type, interface3));
    type->SetFields(6);
    type->Reflection.SetFunctions(11,
        new uFunction("set_Font", NULL, (void*)TextView__set_Font_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Font_typeof()),
        new uFunction("set_FontSize", NULL, (void*)TextView__set_FontSize_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("set_LineSpacing", NULL, (void*)TextView__set_LineSpacing_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("set_MaxLength", NULL, (void*)TextView__set_MaxLength_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)TextView__New5_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)TextView__New6_fn, 0, true, type, 1, ::g::Java::Object_typeof()),
        new uFunction("set_TextAlignment", NULL, (void*)TextView__set_TextAlignment_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::TextAlignment_typeof()),
        new uFunction("set_TextColor", NULL, (void*)TextView__set_TextColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("set_TextTruncation", NULL, (void*)TextView__set_TextTruncation_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::TextTruncation_typeof()),
        new uFunction("set_TextWrapping", NULL, (void*)TextView__set_TextWrapping_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::TextWrapping_typeof()),
        new uFunction("set_Value", NULL, (void*)TextView__set_Value_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
}

TextView_type* TextView_typeof()
{
    static uSStrong<TextView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::LeafView_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 4;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(TextView);
    options.TypeSize = sizeof(TextView_type);
    type = (TextView_type*)uClassType::New("Fuse.Controls.Native.Android.TextView", options);
    type->fp_build_ = TextView_build;
    type->fp_ctor_ = (void*)TextView__New5_fn;
    type->interface3.fp_set_Value = (void(*)(uObject*, uString*))TextView__set_Value_fn;
    type->interface3.fp_set_MaxLength = (void(*)(uObject*, int32_t*))TextView__set_MaxLength_fn;
    type->interface3.fp_set_TextWrapping = (void(*)(uObject*, int32_t*))TextView__set_TextWrapping_fn;
    type->interface3.fp_set_LineSpacing = (void(*)(uObject*, float*))TextView__set_LineSpacing_fn;
    type->interface3.fp_set_FontSize = (void(*)(uObject*, float*))TextView__set_FontSize_fn;
    type->interface3.fp_set_Font = (void(*)(uObject*, ::g::Fuse::Font*))TextView__set_Font_fn;
    type->interface3.fp_set_TextAlignment = (void(*)(uObject*, int32_t*))TextView__set_TextAlignment_fn;
    type->interface3.fp_set_TextColor = (void(*)(uObject*, ::g::Uno::Float4*))TextView__set_TextColor_fn;
    type->interface3.fp_set_TextTruncation = (void(*)(uObject*, int32_t*))TextView__set_TextTruncation_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// public TextView() :12
void TextView__ctor_9_fn(TextView* __this)
{
    __this->ctor_9();
}

// public TextView(Java.Object handle) :10
void TextView__ctor_10_fn(TextView* __this, ::g::Java::Object* handle)
{
    __this->ctor_10(handle);
}

// private static Java.Object Create() :78
void TextView__Create_fn(::g::Java::Object** __retval)
{
    *__retval = TextView::Create();
}

// public void set_Font(Fuse.Font value) :45
void TextView__set_Font_fn(TextView* __this, ::g::Fuse::Font* value)
{
    __this->Font(value);
}

// public void set_FontSize(float value) :40
void TextView__set_FontSize_fn(TextView* __this, float* value)
{
    __this->FontSize(*value);
}

// public void set_LineSpacing(float value) :35
void TextView__set_LineSpacing_fn(TextView* __this, float* value)
{
    __this->LineSpacing(*value);
}

// public void set_MaxLength(int value) :21
void TextView__set_MaxLength_fn(TextView* __this, int32_t* value)
{
    __this->MaxLength(*value);
}

// public TextView New() :12
void TextView__New5_fn(TextView** __retval)
{
    *__retval = TextView::New5();
}

// public TextView New(Java.Object handle) :10
void TextView__New6_fn(::g::Java::Object* handle, TextView** __retval)
{
    *__retval = TextView::New6(handle);
}

// private static void SetFont(Java.Object handle, Java.Object fontHandle) :111
void TextView__SetFont_fn(::g::Java::Object* handle, ::g::Java::Object* fontHandle)
{
    TextView::SetFont(handle, fontHandle);
}

// private static void SetFontSize(Java.Object handle, float size) :105
void TextView__SetFontSize_fn(::g::Java::Object* handle, float* size)
{
    TextView::SetFontSize(handle, *size);
}

// private static void SetLineSpacing(Java.Object handle, float spacing) :99
void TextView__SetLineSpacing_fn(::g::Java::Object* handle, float* spacing)
{
    TextView::SetLineSpacing(handle, *spacing);
}

// private static void SetMaxLength(Java.Object handle, int maxLength) :132
void TextView__SetMaxLength_fn(::g::Java::Object* handle, int32_t* maxLength)
{
    TextView::SetMaxLength(handle, *maxLength);
}

// private static void SetText(Java.Object handle, string text) :84
void TextView__SetText_fn(::g::Java::Object* handle, uString* text)
{
    TextView::SetText(handle, text);
}

// private static void SetTextAlignment(Java.Object handle, int alignment) :117
void TextView__SetTextAlignment_fn(::g::Java::Object* handle, int32_t* alignment)
{
    TextView::SetTextAlignment(handle, *alignment);
}

// private static void SetTextColor(Java.Object handle, int color) :126
void TextView__SetTextColor_fn(::g::Java::Object* handle, int32_t* color)
{
    TextView::SetTextColor(handle, *color);
}

// private static void SetTextWrapping(Java.Object handle, bool wrap) :93
void TextView__SetTextWrapping_fn(::g::Java::Object* handle, bool* wrap)
{
    TextView::SetTextWrapping(handle, *wrap);
}

// public void set_TextAlignment(Fuse.Controls.TextAlignment value) :56
void TextView__set_TextAlignment_fn(TextView* __this, int32_t* value)
{
    __this->TextAlignment(*value);
}

// public void set_TextColor(float4 value) :69
void TextView__set_TextColor_fn(TextView* __this, ::g::Uno::Float4* value)
{
    __this->TextColor(*value);
}

// public void set_TextTruncation(Fuse.Controls.TextTruncation value) :74
void TextView__set_TextTruncation_fn(TextView* __this, int32_t* value)
{
    __this->TextTruncation(*value);
}

// public void set_TextWrapping(Fuse.Controls.TextWrapping value) :30
void TextView__set_TextWrapping_fn(TextView* __this, int32_t* value)
{
    __this->TextWrapping(*value);
}

// public void set_Value(string value) :16
void TextView__set_Value_fn(TextView* __this, uString* value)
{
    __this->Value(value);
}

// public TextView() [instance] :12
void TextView::ctor_9()
{
    ctor_10(TextView::Create());
}

// public TextView(Java.Object handle) [instance] :10
void TextView::ctor_10(::g::Java::Object* handle)
{
    ctor_7(handle);
}

// public void set_Font(Fuse.Font value) [instance] :45
void TextView::Font(::g::Fuse::Font* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", "set_Font(Fuse.Font)");
    ::g::Fuse::Controls::Native::Android::Typeface* typeface = (value != ::g::Fuse::Font::PlatformDefault()) ? (::g::Fuse::Controls::Native::Android::Typeface*)::g::Fuse::Controls::Native::Android::TypefaceCache::GetTypeface(value) : (::g::Fuse::Controls::Native::Android::Typeface*)::g::Fuse::Controls::Native::Android::Typeface::Default();
    TextView::SetFont(Handle(), uPtr(typeface)->Handle());
}

// public void set_FontSize(float value) [instance] :40
void TextView::FontSize(float value)
{
    TextView::SetFontSize(Handle(), value);
}

// public void set_LineSpacing(float value) [instance] :35
void TextView::LineSpacing(float value)
{
    TextView::SetLineSpacing(Handle(), value);
}

// public void set_MaxLength(int value) [instance] :21
void TextView::MaxLength(int32_t value)
{
    TextView::SetMaxLength(Handle(), (value == 0) ? 2147483647 : value);
}

// public void set_TextAlignment(Fuse.Controls.TextAlignment value) [instance] :56
void TextView::TextAlignment(int32_t value)
{
    switch (value)
    {
        case 0:
        {
            TextView::SetTextAlignment(Handle(), 3);
            break;
        }
        case 1:
        {
            TextView::SetTextAlignment(Handle(), 1);
            break;
        }
        case 2:
        {
            TextView::SetTextAlignment(Handle(), 5);
            break;
        }
    }
}

// public void set_TextColor(float4 value) [instance] :69
void TextView::TextColor(::g::Uno::Float4 value)
{
    TextView::SetTextColor(Handle(), (int32_t)::g::Uno::Color::ToArgb(value));
}

// public void set_TextTruncation(Fuse.Controls.TextTruncation value) [instance] :74
void TextView::TextTruncation(int32_t value)
{
}

// public void set_TextWrapping(Fuse.Controls.TextWrapping value) [instance] :30
void TextView::TextWrapping(int32_t value)
{
    TextView::SetTextWrapping(Handle(), value == 1);
}

// public void set_Value(string value) [instance] :16
void TextView::Value(uString* value)
{
    TextView::SetText(Handle(), value);
}

// private static Java.Object Create() [static] :78
::g::Java::Object* TextView::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create211", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public TextView New() [static] :12
TextView* TextView::New5()
{
    TextView* obj2 = (TextView*)uNew(TextView_typeof());
    obj2->ctor_9();
    return obj2;
}

// public TextView New(Java.Object handle) [static] :10
TextView* TextView::New6(::g::Java::Object* handle)
{
    TextView* obj1 = (TextView*)uNew(TextView_typeof());
    obj1->ctor_10(handle);
    return obj1;
}

// private static void SetFont(Java.Object handle, Java.Object fontHandle) [static] :111
void TextView::SetFont(::g::Java::Object* handle, ::g::Java::Object* fontHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetFont212", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ufontHandle=fontHandle;
        jobject _fontHandle = (_ufontHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ufontHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_fontHandle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_fontHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_fontHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetFontSize(Java.Object handle, float size) [static] :105
void TextView::SetFontSize(::g::Java::Object* handle, float size)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetFontSize213", "(Ljava/lang/Object;F)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _usize=size;
        jfloat _size = (jfloat)_usize;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_size);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetLineSpacing(Java.Object handle, float spacing) [static] :99
void TextView::SetLineSpacing(::g::Java::Object* handle, float spacing)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetLineSpacing214", "(Ljava/lang/Object;F)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _uspacing=spacing;
        jfloat _spacing = (jfloat)_uspacing;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_spacing);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetMaxLength(Java.Object handle, int maxLength) [static] :132
void TextView::SetMaxLength(::g::Java::Object* handle, int32_t maxLength)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetMaxLength215", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _umaxLength=maxLength;
        jint _maxLength = (jint)_umaxLength;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_maxLength);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetText(Java.Object handle, string text) [static] :84
void TextView::SetText(::g::Java::Object* handle, uString* text)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetText216", "(Ljava/lang/Object;Ljava/lang/String;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uString* _utext=text;
        jstring _text = JniHelper::UnoToJavaString(_utext);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_text);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_text!=NULL) { U_JNIVAR->DeleteLocalRef(_text); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetTextAlignment(Java.Object handle, int alignment) [static] :117
void TextView::SetTextAlignment(::g::Java::Object* handle, int32_t alignment)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTextAlignment217", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _ualignment=alignment;
        jint _alignment = (jint)_ualignment;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_alignment);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetTextColor(Java.Object handle, int color) [static] :126
void TextView::SetTextColor(::g::Java::Object* handle, int32_t color)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTextColor218", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _ucolor=color;
        jint _color = (jint)_ucolor;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_color);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetTextWrapping(Java.Object handle, bool wrap) [static] :93
void TextView::SetTextWrapping(::g::Java::Object* handle, bool wrap)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTextWrapping219", "(Ljava/lang/Object;Z)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _uwrap=wrap;
        jboolean _wrap = (jboolean)_uwrap;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_wrap);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Controls.TimePicker\1.8.1\Android\TimePicker.uno
// -----------------------------------------------------------------------------------------------------

// internal sealed extern class TimePickerView :17
// {
static void TimePickerView_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Action_typeof();
    type->SetDependencies(
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(TimePickerView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(TimePickerView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(TimePickerView_type, interface2),
        ::g::Fuse::Controls::ITimePickerView_typeof(), offsetof(TimePickerView_type, interface3));
    type->SetFields(6,
        ::g::Fuse::Controls::TimePicker_typeof(), offsetof(TimePickerView, _host), 0,
        ::g::Uno::DateTime_typeof(), offsetof(TimePickerView, _pollValueCache), 0);
}

TimePickerView_type* TimePickerView_typeof()
{
    static uSStrong<TimePickerView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::LeafView_typeof();
    options.FieldCount = 8;
    options.InterfaceCount = 4;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(TimePickerView);
    options.TypeSize = sizeof(TimePickerView_type);
    type = (TimePickerView_type*)uClassType::New("Fuse.Controls.Native.Android.TimePickerView", options);
    type->fp_build_ = TimePickerView_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))TimePickerView__Dispose_fn;
    type->interface3.fp_OnRooted = (void(*)(uObject*))TimePickerView__OnRooted_fn;
    type->interface3.fp_OnUnrooted = (void(*)(uObject*))TimePickerView__OnUnrooted_fn;
    type->interface3.fp_set_Value = (void(*)(uObject*, ::g::Uno::DateTime*))TimePickerView__set_Value_fn;
    type->interface3.fp_set_Is24HourView = (void(*)(uObject*, bool*))TimePickerView__set_Is24HourView_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))TimePickerView__Dispose_fn;
    return type;
}

// public TimePickerView(Fuse.Controls.TimePicker host) :22
void TimePickerView__ctor_9_fn(TimePickerView* __this, ::g::Fuse::Controls::TimePicker* host)
{
    __this->ctor_9(host);
}

// private static Java.Object Create() :91
void TimePickerView__Create_fn(::g::Java::Object** __retval)
{
    *__retval = TimePickerView::Create();
}

// public override sealed void Dispose() :34
void TimePickerView__Dispose_fn(TimePickerView* __this)
{
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
    __this->_host = NULL;
}

// private long GetTimeInMsSince1970InUtc(Java.Object timePickerHandle) :119
void TimePickerView__GetTimeInMsSince1970InUtc_fn(TimePickerView* __this, ::g::Java::Object* timePickerHandle, int64_t* __retval)
{
    *__retval = __this->GetTimeInMsSince1970InUtc(timePickerHandle);
}

// public void set_Is24HourView(bool value) :87
void TimePickerView__set_Is24HourView_fn(TimePickerView* __this, bool* value)
{
    __this->Is24HourView(*value);
}

// public TimePickerView New(Fuse.Controls.TimePicker host) :22
void TimePickerView__New5_fn(::g::Fuse::Controls::TimePicker* host, TimePickerView** __retval)
{
    *__retval = TimePickerView::New5(host);
}

// public void OnRooted() :70
void TimePickerView__OnRooted_fn(TimePickerView* __this)
{
    __this->OnRooted();
}

// public void OnUnrooted() :75
void TimePickerView__OnUnrooted_fn(TimePickerView* __this)
{
    __this->OnUnrooted();
}

// private void OnValueChanged(Uno.DateTime value) :80
void TimePickerView__OnValueChanged_fn(TimePickerView* __this, ::g::Uno::DateTime* value)
{
    __this->OnValueChanged(*value);
}

// public void PollViewValue() :61
void TimePickerView__PollViewValue_fn(TimePickerView* __this)
{
    __this->PollViewValue();
}

// private void SetIs24HourView(Java.Object timePickerHandle, bool value) :150
void TimePickerView__SetIs24HourView_fn(TimePickerView* __this, ::g::Java::Object* timePickerHandle, bool* value)
{
    __this->SetIs24HourView(timePickerHandle, *value);
}

// private void SetTime(Java.Object timePickerHandle, long msSince1970InUtc) :97
void TimePickerView__SetTime_fn(TimePickerView* __this, ::g::Java::Object* timePickerHandle, int64_t* msSince1970InUtc)
{
    __this->SetTime(timePickerHandle, *msSince1970InUtc);
}

// private void UpdatePollValueCache() :56
void TimePickerView__UpdatePollValueCache_fn(TimePickerView* __this)
{
    __this->UpdatePollValueCache();
}

// public Uno.DateTime get_Value() :42
void TimePickerView__get_Value_fn(TimePickerView* __this, ::g::Uno::DateTime* __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(Uno.DateTime value) :47
void TimePickerView__set_Value_fn(TimePickerView* __this, ::g::Uno::DateTime* value)
{
    __this->Value(*value);
}

// public TimePickerView(Fuse.Controls.TimePicker host) [instance] :22
void TimePickerView::ctor_9(::g::Fuse::Controls::TimePicker* host)
{
    uStackFrame __("Fuse.Controls.Native.Android.TimePickerView", ".ctor(Fuse.Controls.TimePicker)");
    ctor_7(TimePickerView::Create());
    _host = host;
    Value(uPtr(_host)->Value());
    Is24HourView(uPtr(_host)->Is24HourView());
    UpdatePollValueCache();
}

// private long GetTimeInMsSince1970InUtc(Java.Object timePickerHandle) [instance] :119
int64_t TimePickerView::GetTimeInMsSince1970InUtc(::g::Java::Object* timePickerHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetTimeInMsSince1970InUtc221", "(Lcom/uno/UnoObject;Ljava/lang/Object;)J");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _utimePickerHandle=timePickerHandle;
        jobject _timePickerHandle = (_utimePickerHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_utimePickerHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jlong __jresult = U_JNIVAR->CallStaticLongMethod(__cls,__mtd,_this_,_timePickerHandle);
        int64_t __result = (int64_t)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_timePickerHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_timePickerHandle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public void set_Is24HourView(bool value) [instance] :87
void TimePickerView::Is24HourView(bool value)
{
    SetIs24HourView(Handle(), value);
}

// public void OnRooted() [instance] :70
void TimePickerView::OnRooted()
{
    uStackFrame __("Fuse.Controls.Native.Android.TimePickerView", "OnRooted()");
    ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)TimePickerView__PollViewValue_fn, this), 0);
}

// public void OnUnrooted() [instance] :75
void TimePickerView::OnUnrooted()
{
    uStackFrame __("Fuse.Controls.Native.Android.TimePickerView", "OnUnrooted()");
    ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)TimePickerView__PollViewValue_fn, this), 0);
}

// private void OnValueChanged(Uno.DateTime value) [instance] :80
void TimePickerView::OnValueChanged(::g::Uno::DateTime value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TimePickerView", "OnValueChanged(Uno.DateTime)");
    uPtr(_host)->OnNativeViewValueChanged(value);
}

// public void PollViewValue() [instance] :61
void TimePickerView::PollViewValue()
{
    uStackFrame __("Fuse.Controls.Native.Android.TimePickerView", "PollViewValue()");

    if (::g::Uno::DateTime__op_Inequality(Value(), _pollValueCache))
    {
        OnValueChanged(Value());
        UpdatePollValueCache();
    }
}

// private void SetIs24HourView(Java.Object timePickerHandle, bool value) [instance] :150
void TimePickerView::SetIs24HourView(::g::Java::Object* timePickerHandle, bool value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetIs24HourView222", "(Lcom/uno/UnoObject;Ljava/lang/Object;Z)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _utimePickerHandle=timePickerHandle;
        jobject _timePickerHandle = (_utimePickerHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_utimePickerHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _uvalue=value;
        jboolean _value = (jboolean)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_timePickerHandle,_value);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_timePickerHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_timePickerHandle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void SetTime(Java.Object timePickerHandle, long msSince1970InUtc) [instance] :97
void TimePickerView::SetTime(::g::Java::Object* timePickerHandle, int64_t msSince1970InUtc)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTime223", "(Lcom/uno/UnoObject;Ljava/lang/Object;J)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _utimePickerHandle=timePickerHandle;
        jobject _timePickerHandle = (_utimePickerHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_utimePickerHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int64_t _umsSince1970InUtc=msSince1970InUtc;
        jlong _msSince1970InUtc = (jlong)_umsSince1970InUtc;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_timePickerHandle,_msSince1970InUtc);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_timePickerHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_timePickerHandle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void UpdatePollValueCache() [instance] :56
void TimePickerView::UpdatePollValueCache()
{
    _pollValueCache = Value();
}

// public Uno.DateTime get_Value() [instance] :42
::g::Uno::DateTime TimePickerView::Value()
{
    uStackFrame __("Fuse.Controls.Native.Android.TimePickerView", "get_Value()");
    int64_t msSince1970InUtc = GetTimeInMsSince1970InUtc(Handle());
    return ::g::Fuse::Controls::Native::Android::DateTimeConverterHelpers::ConvertMsSince1970InUtcToDateTime(msSince1970InUtc);
}

// public void set_Value(Uno.DateTime value) [instance] :47
void TimePickerView::Value(::g::Uno::DateTime value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TimePickerView", "set_Value(Uno.DateTime)");
    SetTime(Handle(), ::g::Fuse::Controls::Native::Android::DateTimeConverterHelpers::ConvertDateTimeToMsSince1970InUtc(value));
    UpdatePollValueCache();
}

// private static Java.Object Create() [static] :91
::g::Java::Object* TimePickerView::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create220", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public TimePickerView New(Fuse.Controls.TimePicker host) [static] :22
TimePickerView* TimePickerView::New5(::g::Fuse::Controls::TimePicker* host)
{
    TimePickerView* obj1 = (TimePickerView*)uNew(TimePickerView_typeof());
    obj1->ctor_9(host);
    return obj1;
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.8.1\Android\TypefaceCache.uno
// ----------------------------------------------------------------------------------------------------

// internal sealed extern class Typeface :10
// {
static void Typeface_build(uType* type)
{
    ::TYPES[10] = ::g::Java::Object_typeof();
    type->SetFields(0,
        ::TYPES[10/*Java.Object*/], offsetof(Typeface, _handle), 0);
}

uType* Typeface_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Typeface);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.Typeface", options);
    type->fp_build_ = Typeface_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Typeface__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int32_t*))Typeface__GetHashCode_fn;
    return type;
}

// public Typeface(Java.Object handle) :20
void Typeface__ctor__fn(Typeface* __this, ::g::Java::Object* handle)
{
    __this->ctor_(handle);
}

// private static Java.Object CreateFromBundleFile(string bundlePath) :53
void Typeface__CreateFromBundleFile_fn(uString* bundlePath, ::g::Java::Object** __retval)
{
    *__retval = Typeface::CreateFromBundleFile(bundlePath);
}

// public static Fuse.Controls.Native.Android.Typeface CreateFromBundleFile(Uno.IO.BundleFile file) :42
void Typeface__CreateFromBundleFile1_fn(::g::Uno::IO::BundleFile* file, Typeface** __retval)
{
    *__retval = Typeface::CreateFromBundleFile1(file);
}

// public static Fuse.Controls.Native.Android.Typeface CreateFromFile(string path) :47
void Typeface__CreateFromFile_fn(uString* path, Typeface** __retval)
{
    *__retval = Typeface::CreateFromFile(path);
}

// private static Java.Object CreateFromFileImpl(string path) :61
void Typeface__CreateFromFileImpl_fn(uString* path, ::g::Java::Object** __retval)
{
    *__retval = Typeface::CreateFromFileImpl(path);
}

// public static Fuse.Controls.Native.Android.Typeface get_Default() :27
void Typeface__get_Default_fn(Typeface** __retval)
{
    *__retval = Typeface::Default();
}

// public override sealed bool Equals(object obj) :30
void Typeface__Equals_fn(Typeface* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Fuse.Controls.Native.Android.Typeface", "Equals(object)");
    return *__retval = uIs(obj, ::TYPES[10/*Java.Object*/]) ? ::g::Uno::Object::Equals(uPtr(__this->_handle), uCast< ::g::Java::Object*>(obj, ::TYPES[10/*Java.Object*/])) : false, void();
}

// private static Java.Object GetDefault() :67
void Typeface__GetDefault_fn(::g::Java::Object** __retval)
{
    *__retval = Typeface::GetDefault();
}

// public override sealed int GetHashCode() :37
void Typeface__GetHashCode_fn(Typeface* __this, int32_t* __retval)
{
    uStackFrame __("Fuse.Controls.Native.Android.Typeface", "GetHashCode()");
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->_handle)), void();
}

// public Java.Object get_Handle() :14
void Typeface__get_Handle_fn(Typeface* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Handle();
}

// public Typeface New(Java.Object handle) :20
void Typeface__New1_fn(::g::Java::Object* handle, Typeface** __retval)
{
    *__retval = Typeface::New1(handle);
}

// public Typeface(Java.Object handle) [instance] :20
void Typeface::ctor_(::g::Java::Object* handle)
{
    _handle = handle;
}

// public Java.Object get_Handle() [instance] :14
::g::Java::Object* Typeface::Handle()
{
    return _handle;
}

// private static Java.Object CreateFromBundleFile(string bundlePath) [static] :53
::g::Java::Object* Typeface::CreateFromBundleFile(uString* bundlePath)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateFromBundleFile224", "(Ljava/lang/String;)Ljava/lang/Object;");
        uString* _ubundlePath=bundlePath;
        jstring _bundlePath = JniHelper::UnoToJavaString(_ubundlePath);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_bundlePath);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_bundlePath!=NULL) { U_JNIVAR->DeleteLocalRef(_bundlePath); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static Fuse.Controls.Native.Android.Typeface CreateFromBundleFile(Uno.IO.BundleFile file) [static] :42
Typeface* Typeface::CreateFromBundleFile1(::g::Uno::IO::BundleFile* file)
{
    uStackFrame __("Fuse.Controls.Native.Android.Typeface", "CreateFromBundleFile(Uno.IO.BundleFile)");
    return Typeface::New1(Typeface::CreateFromBundleFile(uPtr(file)->BundlePath()));
}

// public static Fuse.Controls.Native.Android.Typeface CreateFromFile(string path) [static] :47
Typeface* Typeface::CreateFromFile(uString* path)
{
    return Typeface::New1(Typeface::CreateFromFileImpl(path));
}

// private static Java.Object CreateFromFileImpl(string path) [static] :61
::g::Java::Object* Typeface::CreateFromFileImpl(uString* path)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateFromFileImpl225", "(Ljava/lang/String;)Ljava/lang/Object;");
        uString* _upath=path;
        jstring _path = JniHelper::UnoToJavaString(_upath);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_path);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_path!=NULL) { U_JNIVAR->DeleteLocalRef(_path); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object GetDefault() [static] :67
::g::Java::Object* Typeface::GetDefault()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetDefault226", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public Typeface New(Java.Object handle) [static] :20
Typeface* Typeface::New1(::g::Java::Object* handle)
{
    Typeface* obj1 = (Typeface*)uNew(Typeface_typeof());
    obj1->ctor_(handle);
    return obj1;
}

// public static Fuse.Controls.Native.Android.Typeface get_Default() [static] :27
Typeface* Typeface::Default()
{
    return Typeface::New1(Typeface::GetDefault());
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.8.1\Android\TypefaceCache.uno
// ----------------------------------------------------------------------------------------------------

// internal static extern class TypefaceCache :73
// {
// static generated TypefaceCache() :73
static void TypefaceCache__cctor__fn(uType* __type)
{
    TypefaceCache::_typefaces_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[24/*Uno.Collections.Dictionary<string, Fuse.Controls.Native.Android.Typeface>*/]));
}

static void TypefaceCache_build(uType* type)
{
    ::STRINGS[4] = uString::Const("/tempFont");
    ::TYPES[24] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Controls::Native::Android::Typeface_typeof(), NULL);
    ::TYPES[25] = ::g::Uno::UX::BundleFileSource_typeof();
    ::TYPES[26] = ::g::Fuse::Resources::SystemFileSource_typeof();
    type->SetFields(0,
        ::TYPES[24/*Uno.Collections.Dictionary<string, Fuse.Controls.Native.Android.Typeface>*/], (uintptr_t)&TypefaceCache::_typefaces_, uFieldFlagsStatic);
}

uClassType* TypefaceCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.Android.TypefaceCache", options);
    type->fp_build_ = TypefaceCache_build;
    type->fp_cctor_ = TypefaceCache__cctor__fn;
    return type;
}

// public static Fuse.Controls.Native.Android.Typeface GetTypeface(Fuse.Font font) :78
void TypefaceCache__GetTypeface_fn(::g::Fuse::Font* font, ::g::Fuse::Controls::Native::Android::Typeface** __retval)
{
    *__retval = TypefaceCache::GetTypeface(font);
}

// private static Fuse.Controls.Native.Android.Typeface GetTypefaceFromBundleFile(Uno.IO.BundleFile file) :85
void TypefaceCache__GetTypefaceFromBundleFile_fn(::g::Uno::IO::BundleFile* file, ::g::Fuse::Controls::Native::Android::Typeface** __retval)
{
    *__retval = TypefaceCache::GetTypefaceFromBundleFile(file);
}

// private static Fuse.Controls.Native.Android.Typeface GetTypefaceFromFileSource(Uno.UX.FileSource fileSource) :95
void TypefaceCache__GetTypefaceFromFileSource_fn(::g::Uno::UX::FileSource* fileSource, ::g::Fuse::Controls::Native::Android::Typeface** __retval)
{
    *__retval = TypefaceCache::GetTypefaceFromFileSource(fileSource);
}

uSStrong< ::g::Uno::Collections::Dictionary*> TypefaceCache::_typefaces_;

// public static Fuse.Controls.Native.Android.Typeface GetTypeface(Fuse.Font font) [static] :78
::g::Fuse::Controls::Native::Android::Typeface* TypefaceCache::GetTypeface(::g::Fuse::Font* font)
{
    uStackFrame __("Fuse.Controls.Native.Android.TypefaceCache", "GetTypeface(Fuse.Font)");
    TypefaceCache_typeof()->Init();
    return uIs((::g::Uno::UX::FileSource*)uPtr(font)->FileSource(), ::TYPES[25/*Uno.UX.BundleFileSource*/]) ? (::g::Fuse::Controls::Native::Android::Typeface*)TypefaceCache::GetTypefaceFromBundleFile(uPtr(uCast< ::g::Uno::UX::BundleFileSource*>(uPtr(font)->FileSource(), ::TYPES[25/*Uno.UX.BundleFileSource*/]))->BundleFile) : (::g::Fuse::Controls::Native::Android::Typeface*)TypefaceCache::GetTypefaceFromFileSource(uPtr(font)->FileSource());
}

// private static Fuse.Controls.Native.Android.Typeface GetTypefaceFromBundleFile(Uno.IO.BundleFile file) [static] :85
::g::Fuse::Controls::Native::Android::Typeface* TypefaceCache::GetTypefaceFromBundleFile(::g::Uno::IO::BundleFile* file)
{
    uStackFrame __("Fuse.Controls.Native.Android.TypefaceCache", "GetTypefaceFromBundleFile(Uno.IO.BundleFile)");
    TypefaceCache_typeof()->Init();
    bool ret1;
    ::g::Fuse::Controls::Native::Android::Typeface* ret2;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(TypefaceCache::_typefaces_), uPtr(file)->BundlePath(), &ret1), ret1))
        return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(TypefaceCache::_typefaces_), uPtr(file)->BundlePath(), &ret2), ret2);

    ::g::Fuse::Controls::Native::Android::Typeface* typeface = ::g::Fuse::Controls::Native::Android::Typeface::CreateFromBundleFile1(file);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(TypefaceCache::_typefaces_), uPtr(file)->BundlePath(), typeface);
    return typeface;
}

// private static Fuse.Controls.Native.Android.Typeface GetTypefaceFromFileSource(Uno.UX.FileSource fileSource) [static] :95
::g::Fuse::Controls::Native::Android::Typeface* TypefaceCache::GetTypefaceFromFileSource(::g::Uno::UX::FileSource* fileSource)
{
    uStackFrame __("Fuse.Controls.Native.Android.TypefaceCache", "GetTypefaceFromFileSource(Uno.UX.FileSource)");
    TypefaceCache_typeof()->Init();
    bool ret3;
    ::g::Fuse::Controls::Native::Android::Typeface* ret4;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(TypefaceCache::_typefaces_), uPtr(fileSource)->Name, &ret3), ret3))
        return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(TypefaceCache::_typefaces_), uPtr(fileSource)->Name, &ret4), ret4);

    ::g::Fuse::Controls::Native::Android::Typeface* typeface;

    if (uIs(fileSource, ::TYPES[26/*Fuse.Resources.SystemFileSource*/]))
        typeface = ::g::Fuse::Controls::Native::Android::Typeface::CreateFromFile(uPtr(fileSource)->Name);
    else
    {
        uArray* data = uPtr(fileSource)->ReadAllBytes();
        uString* path = ::g::Uno::String::op_Addition2(::g::Uno::IO::Directory::GetUserDirectory(1), ::STRINGS[4/*"/tempFont"*/]);
        ::g::Uno::IO::File::WriteAllBytes(path, data);
        typeface = ::g::Fuse::Controls::Native::Android::Typeface::CreateFromFile(path);
        ::g::Uno::IO::File::Delete(path);
    }

    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(TypefaceCache::_typefaces_), uPtr(fileSource)->Name, typeface);
    return typeface;
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.8.1\Android\View.uno
// -------------------------------------------------------------------------------------------

// public abstract extern class View :8
// {
static void View_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(View_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(View_type, interface1));
    type->SetFields(5,
        ::g::Java::Object_typeof(), offsetof(View, _handle), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_Handle", NULL, (void*)View__get_Handle_fn, 0, false, ::g::Java::Object_typeof(), 0));
}

View_type* View_typeof()
{
    static uSStrong<View_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::ViewHandle_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(View);
    options.TypeSize = sizeof(View_type);
    type = (View_type*)uClassType::New("Fuse.Controls.Native.Android.View", options);
    type->fp_build_ = View_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// protected View(Java.Object handle) :14
void View__ctor_4_fn(View* __this, ::g::Java::Object* handle)
{
    __this->ctor_4(handle);
}

// protected View(Java.Object handle, bool isLeafView) :16
void View__ctor_5_fn(View* __this, ::g::Java::Object* handle, bool* isLeafView)
{
    __this->ctor_5(handle, *isLeafView);
}

// protected View(Java.Object handle, bool isLeafView, bool handlesInput) :18
void View__ctor_6_fn(View* __this, ::g::Java::Object* handle, bool* isLeafView, bool* handlesInput)
{
    __this->ctor_6(handle, *isLeafView, *handlesInput);
}

// public Java.Object get_Handle() :10
void View__get_Handle_fn(View* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Handle();
}

// protected View(Java.Object handle) [instance] :14
void View::ctor_4(::g::Java::Object* handle)
{
    ctor_5(handle, false);
}

// protected View(Java.Object handle, bool isLeafView) [instance] :16
void View::ctor_5(::g::Java::Object* handle, bool isLeafView)
{
    ctor_6(handle, isLeafView, false);
}

// protected View(Java.Object handle, bool isLeafView, bool handlesInput) [instance] :18
void View::ctor_6(::g::Java::Object* handle, bool isLeafView, bool handlesInput)
{
    ctor_2(handle, isLeafView, handlesInput);
    _handle = handle;
}

// public Java.Object get_Handle() [instance] :10
::g::Java::Object* View::Handle()
{
    return _handle;
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.8.1\Android\ViewGroup.uno
// ------------------------------------------------------------------------------------------------

// public sealed extern class ViewGroup :7
// {
static void ViewGroup_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ViewGroup__New1_fn, 0, true, type, 0));
}

uType* ViewGroup_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ViewGroup);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.ViewGroup", options);
    type->fp_build_ = ViewGroup_build;
    type->fp_ctor_ = (void*)ViewGroup__New1_fn;
    return type;
}

// public generated ViewGroup() :7
void ViewGroup__ctor__fn(ViewGroup* __this)
{
    __this->ctor_();
}

// internal static void AddView(Java.Object parentHandle, Java.Object childHandle) :20
void ViewGroup__AddView_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    ViewGroup::AddView(parentHandle, childHandle);
}

// internal static void AddView(Java.Object parentHandle, Java.Object childHandle, int index) :28
void ViewGroup__AddView1_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle, int32_t* index)
{
    ViewGroup::AddView1(parentHandle, childHandle, *index);
}

// internal static Java.Object Create() :10
void ViewGroup__Create_fn(::g::Java::Object** __retval)
{
    *__retval = ViewGroup::Create();
}

// public generated ViewGroup New() :7
void ViewGroup__New1_fn(ViewGroup** __retval)
{
    *__retval = ViewGroup::New1();
}

// internal static void RemoveView(Java.Object parentHandle, Java.Object childHandle) :36
void ViewGroup__RemoveView_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    ViewGroup::RemoveView(parentHandle, childHandle);
}

// public generated ViewGroup() [instance] :7
void ViewGroup::ctor_()
{
}

// internal static void AddView(Java.Object parentHandle, Java.Object childHandle) [static] :20
void ViewGroup::AddView(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddView227", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uparentHandle=parentHandle;
        jobject _parentHandle = (_uparentHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uparentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uchildHandle=childHandle;
        jobject _childHandle = (_uchildHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uchildHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_parentHandle,_childHandle);
        
        if (_parentHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_parentHandle); }
        if (_childHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_childHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// internal static void AddView(Java.Object parentHandle, Java.Object childHandle, int index) [static] :28
void ViewGroup::AddView1(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle, int32_t index)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddView1228", "(Ljava/lang/Object;Ljava/lang/Object;I)V");
        ::g::Java::Object* _uparentHandle=parentHandle;
        jobject _parentHandle = (_uparentHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uparentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uchildHandle=childHandle;
        jobject _childHandle = (_uchildHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uchildHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _uindex=index;
        jint _index = (jint)_uindex;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_parentHandle,_childHandle,_index);
        
        if (_parentHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_parentHandle); }
        if (_childHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_childHandle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// internal static Java.Object Create() [static] :10
::g::Java::Object* ViewGroup::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create229", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public generated ViewGroup New() [static] :7
ViewGroup* ViewGroup::New1()
{
    ViewGroup* obj1 = (ViewGroup*)uNew(ViewGroup_typeof());
    obj1->ctor_();
    return obj1;
}

// internal static void RemoveView(Java.Object parentHandle, Java.Object childHandle) [static] :36
void ViewGroup::RemoveView(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "RemoveView230", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uparentHandle=parentHandle;
        jobject _parentHandle = (_uparentHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uparentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uchildHandle=childHandle;
        jobject _childHandle = (_uchildHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uchildHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_parentHandle,_childHandle);
        
        if (_parentHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_parentHandle); }
        if (_childHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_childHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::Android
