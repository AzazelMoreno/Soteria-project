// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Fuse.Controls.MapMarker.h>
#include <Fuse.Controls.MapStyle.h>
#include <Fuse.Controls.MapView.h>
#include <Fuse.Controls.Native.-e502cdf1.h>
#include <Fuse.Maps.Android.For-68709a60.h>
#include <Fuse.Maps.Android.Map-ec887b29.h>
#include <Fuse.Maps.Android.MapView.h>
#include <Fuse.Maps.Android.TouchAction.h>
#include <Fuse.Maps.MarkerIconCache.h>
#include <Java.Object.h>
#include <jni.h>
#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.Action2-2.h>
#include <Uno.Action3-3.h>
#include <Uno.Bool.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator1-1.h>
#include <Uno.Collections.Obser-ca008b9a.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.Debug-5d778620.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Permissions.Permi-d35d5681.h>
#include <Uno.Permissions.Permissions.h>
#include <Uno.Permissions.Platf-7d72d93e.h>
#include <Uno.String.h>
#include <Uno.Threading.Future1-1.h>
#include <Uno.UX.FileSource.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[2];

namespace g{
namespace Fuse{
namespace Maps{
namespace Android{

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Maps\1.8.1\Android\ForeignHelpers.uno
// ------------------------------------------------------------------------------------------

// internal static extern class ForeignHelpers :10
// {
static void ForeignHelpers_build(uType* type)
{
}

uClassType* ForeignHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Maps.Android.ForeignHelpers", options);
    type->fp_build_ = ForeignHelpers_build;
    return type;
}

// internal static string AddMarker(Java.Object handle, double lat, double lng, string label, string iconPath, float iconAnchorX, float iconAnchorY, int uid) :131
void ForeignHelpers__AddMarker_fn(::g::Java::Object* handle, double* lat, double* lng, uString* label, uString* iconPath, float* iconAnchorX, float* iconAnchorY, int32_t* uid, uString** __retval)
{
    *__retval = ForeignHelpers::AddMarker(handle, *lat, *lng, label, iconPath, *iconAnchorX, *iconAnchorY, *uid);
}

// internal static void Clear(Java.Object handle) :110
void ForeignHelpers__Clear_fn(::g::Java::Object* handle)
{
    ForeignHelpers::Clear(handle);
}

// internal static void Configure(Java.Object handle) :152
void ForeignHelpers__Configure_fn(::g::Java::Object* handle)
{
    ForeignHelpers::Configure(handle);
}

// internal static void ConfigureGestures(Java.Object handle, bool zoom, bool rotate, bool tilt, bool scroll) :54
void ForeignHelpers__ConfigureGestures_fn(::g::Java::Object* handle, bool* zoom, bool* rotate, bool* tilt, bool* scroll)
{
    ForeignHelpers::ConfigureGestures(handle, *zoom, *rotate, *tilt, *scroll);
}

// internal static void ConfigureUI(Java.Object handle, bool compass, bool myLocationButton) :47
void ForeignHelpers__ConfigureUI_fn(::g::Java::Object* handle, bool* compass, bool* myLocationButton)
{
    ForeignHelpers::ConfigureUI(handle, *compass, *myLocationButton);
}

// internal static Java.Object CreateMap() :13
void ForeignHelpers__CreateMap_fn(::g::Java::Object** __retval)
{
    *__retval = ForeignHelpers::CreateMap();
}

// internal static void Destroy(Java.Object handle) :145
void ForeignHelpers__Destroy_fn(::g::Java::Object* handle)
{
    ForeignHelpers::Destroy(handle);
}

// internal static float GetOrientation(Java.Object handle) :75
void ForeignHelpers__GetOrientation_fn(::g::Java::Object* handle, float* __retval)
{
    *__retval = ForeignHelpers::GetOrientation(handle);
}

// internal static double GetPositionLat(Java.Object handle) :33
void ForeignHelpers__GetPositionLat_fn(::g::Java::Object* handle, double* __retval)
{
    *__retval = ForeignHelpers::GetPositionLat(handle);
}

// internal static double GetPositionLong(Java.Object handle) :40
void ForeignHelpers__GetPositionLong_fn(::g::Java::Object* handle, double* __retval)
{
    *__retval = ForeignHelpers::GetPositionLong(handle);
}

// internal static float GetTilt(Java.Object handle) :61
void ForeignHelpers__GetTilt_fn(::g::Java::Object* handle, float* __retval)
{
    *__retval = ForeignHelpers::GetTilt(handle);
}

// internal static float GetZoom(Java.Object handle) :117
void ForeignHelpers__GetZoom_fn(::g::Java::Object* handle, float* __retval)
{
    *__retval = ForeignHelpers::GetZoom(handle);
}

// internal static void MoveCamera(Java.Object handle, double lat, double lng, float zoom, float tilt, float bearing, double duration) :19
void ForeignHelpers__MoveCamera_fn(::g::Java::Object* handle, double* lat, double* lng, float* zoom, float* tilt, float* bearing, double* duration)
{
    ForeignHelpers::MoveCamera(handle, *lat, *lng, *zoom, *tilt, *bearing, *duration);
}

// internal static void SetHybridStyle(Java.Object handle) :96
void ForeignHelpers__SetHybridStyle_fn(::g::Java::Object* handle)
{
    ForeignHelpers::SetHybridStyle(handle);
}

// internal static void SetMapEventHandlers(Java.Object handle, Uno.Action onMapReady, Uno.Action<double, double> handleLocationLongPress, Uno.Action<double, double> handleLocationTapped, Uno.Action onAnimationBegin, Uno.Action onAnimationEnd, Uno.Action<double, double> handleCameraChange, Uno.Action<int, string> handleMarkerPressed, Uno.Action<int, float, float> handleTouchEvent) :160
void ForeignHelpers__SetMapEventHandlers_fn(::g::Java::Object* handle, uDelegate* onMapReady, uDelegate* handleLocationLongPress, uDelegate* handleLocationTapped, uDelegate* onAnimationBegin, uDelegate* onAnimationEnd, uDelegate* handleCameraChange, uDelegate* handleMarkerPressed, uDelegate* handleTouchEvent)
{
    ForeignHelpers::SetMapEventHandlers(handle, onMapReady, handleLocationLongPress, handleLocationTapped, onAnimationBegin, onAnimationEnd, handleCameraChange, handleMarkerPressed, handleTouchEvent);
}

// internal static void SetMyLocationEnabled(Java.Object handle, bool b) :138
void ForeignHelpers__SetMyLocationEnabled_fn(::g::Java::Object* handle, bool* b)
{
    ForeignHelpers::SetMyLocationEnabled(handle, *b);
}

// public static void SetNormalStyle(Java.Object handle) :103
void ForeignHelpers__SetNormalStyle_fn(::g::Java::Object* handle)
{
    ForeignHelpers::SetNormalStyle(handle);
}

// internal static void SetPosition(Java.Object handle, double lat, double lng, double duration) :26
void ForeignHelpers__SetPosition_fn(::g::Java::Object* handle, double* lat, double* lng, double* duration)
{
    ForeignHelpers::SetPosition(handle, *lat, *lng, *duration);
}

// internal static void SetSatelliteStyle(Java.Object handle) :89
void ForeignHelpers__SetSatelliteStyle_fn(::g::Java::Object* handle)
{
    ForeignHelpers::SetSatelliteStyle(handle);
}

// internal static string AddMarker(Java.Object handle, double lat, double lng, string label, string iconPath, float iconAnchorX, float iconAnchorY, int uid) [static] :131
uString* ForeignHelpers::AddMarker(::g::Java::Object* handle, double lat, double lng, uString* label, uString* iconPath, float iconAnchorX, float iconAnchorY, int32_t uid)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddMarker381", "(Ljava/lang/Object;DDLjava/lang/String;Ljava/lang/String;FFI)Ljava/lang/String;");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        double _ulat=lat;
        jdouble _lat = (jdouble)_ulat;
        double _ulng=lng;
        jdouble _lng = (jdouble)_ulng;
        uString* _ulabel=label;
        jstring _label = JniHelper::UnoToJavaString(_ulabel);
        uString* _uiconPath=iconPath;
        jstring _iconPath = JniHelper::UnoToJavaString(_uiconPath);
        float _uiconAnchorX=iconAnchorX;
        jfloat _iconAnchorX = (jfloat)_uiconAnchorX;
        float _uiconAnchorY=iconAnchorY;
        jfloat _iconAnchorY = (jfloat)_uiconAnchorY;
        int32_t _uuid=uid;
        jint _uid = (jint)_uuid;
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_handle,_lat,_lng,_label,_iconPath,_iconAnchorX,_iconAnchorY,_uid);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        if (_label!=NULL) { U_JNIVAR->DeleteLocalRef(_label); }
        if (_iconPath!=NULL) { U_JNIVAR->DeleteLocalRef(_iconPath); }
        
        
        
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// internal static void Clear(Java.Object handle) [static] :110
void ForeignHelpers::Clear(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Clear382", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// internal static void Configure(Java.Object handle) [static] :152
void ForeignHelpers::Configure(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Configure383", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// internal static void ConfigureGestures(Java.Object handle, bool zoom, bool rotate, bool tilt, bool scroll) [static] :54
void ForeignHelpers::ConfigureGestures(::g::Java::Object* handle, bool zoom, bool rotate, bool tilt, bool scroll)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ConfigureGestures384", "(Ljava/lang/Object;ZZZZ)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _uzoom=zoom;
        jboolean _zoom = (jboolean)_uzoom;
        bool _urotate=rotate;
        jboolean _rotate = (jboolean)_urotate;
        bool _utilt=tilt;
        jboolean _tilt = (jboolean)_utilt;
        bool _uscroll=scroll;
        jboolean _scroll = (jboolean)_uscroll;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_zoom,_rotate,_tilt,_scroll);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// internal static void ConfigureUI(Java.Object handle, bool compass, bool myLocationButton) [static] :47
void ForeignHelpers::ConfigureUI(::g::Java::Object* handle, bool compass, bool myLocationButton)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ConfigureUI385", "(Ljava/lang/Object;ZZ)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _ucompass=compass;
        jboolean _compass = (jboolean)_ucompass;
        bool _umyLocationButton=myLocationButton;
        jboolean _myLocationButton = (jboolean)_umyLocationButton;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_compass,_myLocationButton);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// internal static Java.Object CreateMap() [static] :13
::g::Java::Object* ForeignHelpers::CreateMap()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateMap386", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// internal static void Destroy(Java.Object handle) [static] :145
void ForeignHelpers::Destroy(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Destroy387", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// internal static float GetOrientation(Java.Object handle) [static] :75
float ForeignHelpers::GetOrientation(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetOrientation388", "(Ljava/lang/Object;)F");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jfloat __jresult = U_JNIVAR->CallStaticFloatMethod(__cls,__mtd,_handle);
        float __result = (float)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// internal static double GetPositionLat(Java.Object handle) [static] :33
double ForeignHelpers::GetPositionLat(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetPositionLat389", "(Ljava/lang/Object;)D");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jdouble __jresult = U_JNIVAR->CallStaticDoubleMethod(__cls,__mtd,_handle);
        double __result = (double)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// internal static double GetPositionLong(Java.Object handle) [static] :40
double ForeignHelpers::GetPositionLong(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetPositionLong390", "(Ljava/lang/Object;)D");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jdouble __jresult = U_JNIVAR->CallStaticDoubleMethod(__cls,__mtd,_handle);
        double __result = (double)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// internal static float GetTilt(Java.Object handle) [static] :61
float ForeignHelpers::GetTilt(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetTilt391", "(Ljava/lang/Object;)F");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jfloat __jresult = U_JNIVAR->CallStaticFloatMethod(__cls,__mtd,_handle);
        float __result = (float)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// internal static float GetZoom(Java.Object handle) [static] :117
float ForeignHelpers::GetZoom(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetZoom392", "(Ljava/lang/Object;)F");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jfloat __jresult = U_JNIVAR->CallStaticFloatMethod(__cls,__mtd,_handle);
        float __result = (float)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// internal static void MoveCamera(Java.Object handle, double lat, double lng, float zoom, float tilt, float bearing, double duration) [static] :19
void ForeignHelpers::MoveCamera(::g::Java::Object* handle, double lat, double lng, float zoom, float tilt, float bearing, double duration)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "MoveCamera393", "(Ljava/lang/Object;DDFFFD)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        double _ulat=lat;
        jdouble _lat = (jdouble)_ulat;
        double _ulng=lng;
        jdouble _lng = (jdouble)_ulng;
        float _uzoom=zoom;
        jfloat _zoom = (jfloat)_uzoom;
        float _utilt=tilt;
        jfloat _tilt = (jfloat)_utilt;
        float _ubearing=bearing;
        jfloat _bearing = (jfloat)_ubearing;
        double _uduration=duration;
        jdouble _duration = (jdouble)_uduration;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_lat,_lng,_zoom,_tilt,_bearing,_duration);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        
        
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// internal static void SetHybridStyle(Java.Object handle) [static] :96
void ForeignHelpers::SetHybridStyle(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetHybridStyle394", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// internal static void SetMapEventHandlers(Java.Object handle, Uno.Action onMapReady, Uno.Action<double, double> handleLocationLongPress, Uno.Action<double, double> handleLocationTapped, Uno.Action onAnimationBegin, Uno.Action onAnimationEnd, Uno.Action<double, double> handleCameraChange, Uno.Action<int, string> handleMarkerPressed, Uno.Action<int, float, float> handleTouchEvent) [static] :160
void ForeignHelpers::SetMapEventHandlers(::g::Java::Object* handle, uDelegate* onMapReady, uDelegate* handleLocationLongPress, uDelegate* handleLocationTapped, uDelegate* onAnimationBegin, uDelegate* onAnimationEnd, uDelegate* handleCameraChange, uDelegate* handleMarkerPressed, uDelegate* handleTouchEvent)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetMapEventHandlers395", "(Ljava/lang/Object;Lcom/foreign/Uno/Action;Lcom/foreign/Uno/Action_double_double;Lcom/foreign/Uno/Action_double_double;Lcom/foreign/Uno/Action;Lcom/foreign/Uno/Action;Lcom/foreign/Uno/Action_double_double;Lcom/foreign/Uno/Action_int_String;Lcom/foreign/Uno/Action_int_float_float;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uDelegate* _uonMapReady=onMapReady;
        jobject _onMapReady = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uonMapReady, "com.foreign.Uno.Action");
        uDelegate* _uhandleLocationLongPress=handleLocationLongPress;
        jobject _handleLocationLongPress = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uhandleLocationLongPress, "com.foreign.Uno.Action_double_double");
        uDelegate* _uhandleLocationTapped=handleLocationTapped;
        jobject _handleLocationTapped = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uhandleLocationTapped, "com.foreign.Uno.Action_double_double");
        uDelegate* _uonAnimationBegin=onAnimationBegin;
        jobject _onAnimationBegin = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uonAnimationBegin, "com.foreign.Uno.Action");
        uDelegate* _uonAnimationEnd=onAnimationEnd;
        jobject _onAnimationEnd = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uonAnimationEnd, "com.foreign.Uno.Action");
        uDelegate* _uhandleCameraChange=handleCameraChange;
        jobject _handleCameraChange = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uhandleCameraChange, "com.foreign.Uno.Action_double_double");
        uDelegate* _uhandleMarkerPressed=handleMarkerPressed;
        jobject _handleMarkerPressed = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uhandleMarkerPressed, "com.foreign.Uno.Action_int_String");
        uDelegate* _uhandleTouchEvent=handleTouchEvent;
        jobject _handleTouchEvent = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uhandleTouchEvent, "com.foreign.Uno.Action_int_float_float");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_onMapReady,_handleLocationLongPress,_handleLocationTapped,_onAnimationBegin,_onAnimationEnd,_handleCameraChange,_handleMarkerPressed,_handleTouchEvent);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_onMapReady!=NULL) { U_JNIVAR->DeleteLocalRef(_onMapReady); }
        if (_handleLocationLongPress!=NULL) { U_JNIVAR->DeleteLocalRef(_handleLocationLongPress); }
        if (_handleLocationTapped!=NULL) { U_JNIVAR->DeleteLocalRef(_handleLocationTapped); }
        if (_onAnimationBegin!=NULL) { U_JNIVAR->DeleteLocalRef(_onAnimationBegin); }
        if (_onAnimationEnd!=NULL) { U_JNIVAR->DeleteLocalRef(_onAnimationEnd); }
        if (_handleCameraChange!=NULL) { U_JNIVAR->DeleteLocalRef(_handleCameraChange); }
        if (_handleMarkerPressed!=NULL) { U_JNIVAR->DeleteLocalRef(_handleMarkerPressed); }
        if (_handleTouchEvent!=NULL) { U_JNIVAR->DeleteLocalRef(_handleTouchEvent); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// internal static void SetMyLocationEnabled(Java.Object handle, bool b) [static] :138
void ForeignHelpers::SetMyLocationEnabled(::g::Java::Object* handle, bool b)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetMyLocationEnabled396", "(Ljava/lang/Object;Z)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _ub=b;
        jboolean _b = (jboolean)_ub;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_b);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void SetNormalStyle(Java.Object handle) [static] :103
void ForeignHelpers::SetNormalStyle(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetNormalStyle397", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// internal static void SetPosition(Java.Object handle, double lat, double lng, double duration) [static] :26
void ForeignHelpers::SetPosition(::g::Java::Object* handle, double lat, double lng, double duration)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetPosition399", "(Ljava/lang/Object;DDD)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        double _ulat=lat;
        jdouble _lat = (jdouble)_ulat;
        double _ulng=lng;
        jdouble _lng = (jdouble)_ulng;
        double _uduration=duration;
        jdouble _duration = (jdouble)_uduration;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_lat,_lng,_duration);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// internal static void SetSatelliteStyle(Java.Object handle) [static] :89
void ForeignHelpers::SetSatelliteStyle(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetSatelliteStyle400", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Maps\1.8.1\Android\MapView.uno
// -----------------------------------------------------------------------------------

// public sealed extern class MapView :18
// {
static void MapView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(MapView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(MapView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(MapView_type, interface2),
        ::g::Fuse::Controls::IMapView_typeof(), offsetof(MapView_type, interface3));
    type->SetFields(6,
        ::g::Fuse::Maps::MarkerIconCache_typeof(), offsetof(MapView, _markerGraphicsCache), 0,
        ::g::Java::Object_typeof(), offsetof(MapView, _mapView), 0,
        ::g::Fuse::Controls::MapView_typeof(), offsetof(MapView, _mapViewHost), 0,
        ::g::Fuse::Controls::MapStyle_typeof(), offsetof(MapView, _mapStyleInternal), 0,
        ::g::Uno::Bool_typeof(), offsetof(MapView, _showLocation), 0,
        ::g::Uno::Bool_typeof(), offsetof(MapView, _showLocationButton), 0,
        ::g::Uno::Bool_typeof(), offsetof(MapView, _showCompass), 0,
        ::g::Uno::Bool_typeof(), offsetof(MapView, _allowZoom), 0,
        ::g::Uno::Bool_typeof(), offsetof(MapView, _allowTilt), 0,
        ::g::Uno::Bool_typeof(), offsetof(MapView, _allowRotate), 0,
        ::g::Uno::Bool_typeof(), offsetof(MapView, _allowScroll), 0,
        ::g::Uno::Bool_typeof(), offsetof(MapView, _IsReady), 0,
        ::g::Uno::Action_typeof(), offsetof(MapView, _OnReady), 0);
    type->Reflection.SetFunctions(32,
        new uFunction("get_AllowRotate", NULL, (void*)MapView__get_AllowRotate_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_AllowRotate", NULL, (void*)MapView__set_AllowRotate_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_AllowScroll", NULL, (void*)MapView__get_AllowScroll_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_AllowScroll", NULL, (void*)MapView__set_AllowScroll_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_AllowTilt", NULL, (void*)MapView__get_AllowTilt_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_AllowTilt", NULL, (void*)MapView__set_AllowTilt_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_AllowZoom", NULL, (void*)MapView__get_AllowZoom_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_AllowZoom", NULL, (void*)MapView__set_AllowZoom_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Bearing", NULL, (void*)MapView__get_Bearing_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("Create", NULL, (void*)MapView__Create_fn, 0, true, type, 1, ::g::Fuse::Controls::MapView_typeof()),
        new uFunction("HandleLocationLongPress", NULL, (void*)MapView__HandleLocationLongPress_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("HandleLocationTapped", NULL, (void*)MapView__HandleLocationTapped_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("HandleMarkerTapped", NULL, (void*)MapView__HandleMarkerTapped_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::String_typeof()),
        new uFunction("get_IsReady", NULL, (void*)MapView__get_IsReady_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Latitude", NULL, (void*)MapView__get_Latitude_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_Longitude", NULL, (void*)MapView__get_Longitude_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_Markers", NULL, (void*)MapView__get_Markers_fn, 0, false, ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Controls::MapMarker_typeof(), NULL), 0),
        new uFunction("MoveTo", NULL, (void*)MapView__MoveTo_fn, 0, false, uVoid_typeof(), 5, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("get_OnReady", NULL, (void*)MapView__get_OnReady_fn, 0, false, ::g::Uno::Action_typeof(), 0),
        new uFunction("set_OnReady", NULL, (void*)MapView__set_OnReady_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action_typeof()),
        new uFunction("SetLocation", NULL, (void*)MapView__SetLocation_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("get_ShowCompass", NULL, (void*)MapView__get_ShowCompass_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ShowCompass", NULL, (void*)MapView__set_ShowCompass_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_ShowMyLocation", NULL, (void*)MapView__get_ShowMyLocation_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ShowMyLocation", NULL, (void*)MapView__set_ShowMyLocation_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_ShowMyLocationButton", NULL, (void*)MapView__get_ShowMyLocationButton_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ShowMyLocationButton", NULL, (void*)MapView__set_ShowMyLocationButton_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Style", NULL, (void*)MapView__get_Style_fn, 0, false, ::g::Fuse::Controls::MapStyle_typeof(), 0),
        new uFunction("set_Style", NULL, (void*)MapView__set_Style_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::MapStyle_typeof()),
        new uFunction("get_Tilt", NULL, (void*)MapView__get_Tilt_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("UpdateMarkers", NULL, (void*)MapView__UpdateMarkers_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Zoom", NULL, (void*)MapView__get_Zoom_fn, 0, false, ::g::Uno::Double_typeof(), 0));
}

MapView_type* MapView_typeof()
{
    static uSStrong<MapView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::LeafView_typeof();
    options.FieldCount = 19;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(MapView);
    options.TypeSize = sizeof(MapView_type);
    type = (MapView_type*)uClassType::New("Fuse.Maps.Android.MapView", options);
    type->fp_build_ = MapView_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))MapView__Dispose_fn;
    type->interface3.fp_SetLocation = (void(*)(uObject*, double*, double*))MapView__SetLocation_fn;
    type->interface3.fp_MoveTo = (void(*)(uObject*, double*, double*, double*, double*, double*))MapView__MoveTo_fn;
    type->interface3.fp_UpdateMarkers = (void(*)(uObject*))MapView__UpdateMarkers_fn;
    type->interface3.fp_HandleMarkerTapped = (void(*)(uObject*, int32_t*, uString*))MapView__HandleMarkerTapped_fn;
    type->interface3.fp_HandleLocationTapped = (void(*)(uObject*, double*, double*))MapView__HandleLocationTapped_fn;
    type->interface3.fp_HandleLocationLongPress = (void(*)(uObject*, double*, double*))MapView__HandleLocationLongPress_fn;
    type->interface3.fp_get_Markers = (void(*)(uObject*, ::g::Uno::Collections::ObservableList**))MapView__get_Markers_fn;
    type->interface3.fp_get_Style = (void(*)(uObject*, int32_t*))MapView__get_Style_fn;
    type->interface3.fp_set_Style = (void(*)(uObject*, int32_t*))MapView__set_Style_fn;
    type->interface3.fp_get_Latitude = (void(*)(uObject*, double*))MapView__get_Latitude_fn;
    type->interface3.fp_get_Longitude = (void(*)(uObject*, double*))MapView__get_Longitude_fn;
    type->interface3.fp_get_Bearing = (void(*)(uObject*, double*))MapView__get_Bearing_fn;
    type->interface3.fp_get_Tilt = (void(*)(uObject*, double*))MapView__get_Tilt_fn;
    type->interface3.fp_get_Zoom = (void(*)(uObject*, double*))MapView__get_Zoom_fn;
    type->interface3.fp_get_IsReady = (void(*)(uObject*, bool*))MapView__get_IsReady_fn;
    type->interface3.fp_get_ShowMyLocation = (void(*)(uObject*, bool*))MapView__get_ShowMyLocation_fn;
    type->interface3.fp_set_ShowMyLocation = (void(*)(uObject*, bool*))MapView__set_ShowMyLocation_fn;
    type->interface3.fp_get_ShowMyLocationButton = (void(*)(uObject*, bool*))MapView__get_ShowMyLocationButton_fn;
    type->interface3.fp_set_ShowMyLocationButton = (void(*)(uObject*, bool*))MapView__set_ShowMyLocationButton_fn;
    type->interface3.fp_get_ShowCompass = (void(*)(uObject*, bool*))MapView__get_ShowCompass_fn;
    type->interface3.fp_set_ShowCompass = (void(*)(uObject*, bool*))MapView__set_ShowCompass_fn;
    type->interface3.fp_get_AllowZoom = (void(*)(uObject*, bool*))MapView__get_AllowZoom_fn;
    type->interface3.fp_set_AllowZoom = (void(*)(uObject*, bool*))MapView__set_AllowZoom_fn;
    type->interface3.fp_get_AllowTilt = (void(*)(uObject*, bool*))MapView__get_AllowTilt_fn;
    type->interface3.fp_set_AllowTilt = (void(*)(uObject*, bool*))MapView__set_AllowTilt_fn;
    type->interface3.fp_get_AllowRotate = (void(*)(uObject*, bool*))MapView__get_AllowRotate_fn;
    type->interface3.fp_set_AllowRotate = (void(*)(uObject*, bool*))MapView__set_AllowRotate_fn;
    type->interface3.fp_get_AllowScroll = (void(*)(uObject*, bool*))MapView__get_AllowScroll_fn;
    type->interface3.fp_set_AllowScroll = (void(*)(uObject*, bool*))MapView__set_AllowScroll_fn;
    type->interface3.fp_get_OnReady = (void(*)(uObject*, uDelegate**))MapView__get_OnReady_fn;
    type->interface3.fp_set_OnReady = (void(*)(uObject*, uDelegate*))MapView__set_OnReady_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))MapView__Dispose_fn;
    return type;
}

// private MapView(Fuse.Controls.MapView mapViewHost, Java.Object map) :34
void MapView__ctor_9_fn(MapView* __this, ::g::Fuse::Controls::MapView* mapViewHost, ::g::Java::Object* map)
{
    __this->ctor_9(mapViewHost, map);
}

// public bool get_AllowRotate() :318
void MapView__get_AllowRotate_fn(MapView* __this, bool* __retval)
{
    *__retval = __this->AllowRotate();
}

// public void set_AllowRotate(bool value) :321
void MapView__set_AllowRotate_fn(MapView* __this, bool* value)
{
    __this->AllowRotate(*value);
}

// public bool get_AllowScroll() :329
void MapView__get_AllowScroll_fn(MapView* __this, bool* __retval)
{
    *__retval = __this->AllowScroll();
}

// public void set_AllowScroll(bool value) :332
void MapView__set_AllowScroll_fn(MapView* __this, bool* value)
{
    __this->AllowScroll(*value);
}

// public bool get_AllowTilt() :307
void MapView__get_AllowTilt_fn(MapView* __this, bool* __retval)
{
    *__retval = __this->AllowTilt();
}

// public void set_AllowTilt(bool value) :310
void MapView__set_AllowTilt_fn(MapView* __this, bool* value)
{
    __this->AllowTilt(*value);
}

// public bool get_AllowZoom() :296
void MapView__get_AllowZoom_fn(MapView* __this, bool* __retval)
{
    *__retval = __this->AllowZoom();
}

// public void set_AllowZoom(bool value) :299
void MapView__set_AllowZoom_fn(MapView* __this, bool* value)
{
    __this->AllowZoom(*value);
}

// public double get_Bearing() :191
void MapView__get_Bearing_fn(MapView* __this, double* __retval)
{
    *__retval = __this->Bearing();
}

// private void ConfigGestures() :223
void MapView__ConfigGestures_fn(MapView* __this)
{
    __this->ConfigGestures();
}

// private void ConfigUI() :219
void MapView__ConfigUI_fn(MapView* __this)
{
    __this->ConfigUI();
}

// public static Fuse.Maps.Android.MapView Create(Fuse.Controls.MapView mapViewHost) :24
void MapView__Create_fn(::g::Fuse::Controls::MapView* mapViewHost, MapView** __retval)
{
    *__retval = MapView::Create(mapViewHost);
}

// public override sealed void Dispose() :55
void MapView__Dispose_fn(MapView* __this)
{
    uStackFrame __("Fuse.Maps.Android.MapView", "Dispose()");
    uPtr(__this->SemanticControl())->MapViewClient(NULL);
    __this->IsReady(false);

    if (__this->_mapView != NULL)
        ::g::Fuse::Maps::Android::ForeignHelpers::Destroy(__this->_mapView);

    __this->_mapView = NULL;
    __this->_mapViewHost = NULL;
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
}

// public void HandleLocationLongPress(double latitude, double longitude) :106
void MapView__HandleLocationLongPress_fn(MapView* __this, double* latitude, double* longitude)
{
    __this->HandleLocationLongPress(*latitude, *longitude);
}

// public void HandleLocationTapped(double latitude, double longitude) :101
void MapView__HandleLocationTapped_fn(MapView* __this, double* latitude, double* longitude)
{
    __this->HandleLocationTapped(*latitude, *longitude);
}

// public void HandleMarkerTapped(int uid, string title) :111
void MapView__HandleMarkerTapped_fn(MapView* __this, int32_t* uid, uString* title)
{
    __this->HandleMarkerTapped(*uid, title);
}

// public generated bool get_IsReady() :20
void MapView__get_IsReady_fn(MapView* __this, bool* __retval)
{
    *__retval = __this->IsReady();
}

// private generated void set_IsReady(bool value) :20
void MapView__set_IsReady_fn(MapView* __this, bool* value)
{
    __this->IsReady(*value);
}

// public double get_Latitude() :203
void MapView__get_Latitude_fn(MapView* __this, double* __retval)
{
    *__retval = __this->Latitude();
}

// public double get_Longitude() :209
void MapView__get_Longitude_fn(MapView* __this, double* __retval)
{
    *__retval = __this->Longitude();
}

// public Uno.Collections.ObservableList<Fuse.Controls.MapMarker> get_Markers() :161
void MapView__get_Markers_fn(MapView* __this, ::g::Uno::Collections::ObservableList** __retval)
{
    *__retval = __this->Markers();
}

// public void MoveTo(double latitude, double longitude, double zoomlevel, double tilt, double orientation) :214
void MapView__MoveTo_fn(MapView* __this, double* latitude, double* longitude, double* zoomlevel, double* tilt, double* orientation)
{
    __this->MoveTo(*latitude, *longitude, *zoomlevel, *tilt, *orientation);
}

// private MapView New(Fuse.Controls.MapView mapViewHost, Java.Object map) :34
void MapView__New5_fn(::g::Fuse::Controls::MapView* mapViewHost, ::g::Java::Object* map, MapView** __retval)
{
    *__retval = MapView::New5(mapViewHost, map);
}

// private void OnAnimationEnd() :83
void MapView__OnAnimationEnd_fn(MapView* __this)
{
    __this->OnAnimationEnd();
}

// private void OnAnimationStart() :77
void MapView__OnAnimationStart_fn(MapView* __this)
{
    __this->OnAnimationStart();
}

// internal void OnMapReady() :116
void MapView__OnMapReady_fn(MapView* __this)
{
    __this->OnMapReady();
}

// public generated Uno.Action get_OnReady() :21
void MapView__get_OnReady_fn(MapView* __this, uDelegate** __retval)
{
    *__retval = __this->OnReady();
}

// public generated void set_OnReady(Uno.Action value) :21
void MapView__set_OnReady_fn(MapView* __this, uDelegate* value)
{
    __this->OnReady(value);
}

// private void OnTouchEvent(int action, float x, float y) :88
void MapView__OnTouchEvent_fn(MapView* __this, int32_t* action, float* x, float* y)
{
    __this->OnTouchEvent(*action, *x, *y);
}

// private Fuse.Controls.MapView get_SemanticControl() :68
void MapView__get_SemanticControl_fn(MapView* __this, ::g::Fuse::Controls::MapView** __retval)
{
    *__retval = __this->SemanticControl();
}

// public void SetLocation(double latitude, double longitude) :185
void MapView__SetLocation_fn(MapView* __this, double* latitude, double* longitude)
{
    __this->SetLocation(*latitude, *longitude);
}

// private void SetLocationFromMap(double lat, double lng) :71
void MapView__SetLocationFromMap_fn(MapView* __this, double* lat, double* lng)
{
    __this->SetLocationFromMap(*lat, *lng);
}

// public bool get_ShowCompass() :286
void MapView__get_ShowCompass_fn(MapView* __this, bool* __retval)
{
    *__retval = __this->ShowCompass();
}

// public void set_ShowCompass(bool value) :289
void MapView__set_ShowCompass_fn(MapView* __this, bool* value)
{
    __this->ShowCompass(*value);
}

// public bool get_ShowMyLocation() :248
void MapView__get_ShowMyLocation_fn(MapView* __this, bool* __retval)
{
    *__retval = __this->ShowMyLocation();
}

// public void set_ShowMyLocation(bool value) :251
void MapView__set_ShowMyLocation_fn(MapView* __this, bool* value)
{
    __this->ShowMyLocation(*value);
}

// public bool get_ShowMyLocationButton() :275
void MapView__get_ShowMyLocationButton_fn(MapView* __this, bool* __retval)
{
    *__retval = __this->ShowMyLocationButton();
}

// public void set_ShowMyLocationButton(bool value) :278
void MapView__set_ShowMyLocationButton_fn(MapView* __this, bool* value)
{
    __this->ShowMyLocationButton(*value);
}

// public Fuse.Controls.MapStyle get_Style() :131
void MapView__get_Style_fn(MapView* __this, int32_t* __retval)
{
    *__retval = __this->Style();
}

// public void set_Style(Fuse.Controls.MapStyle value) :132
void MapView__set_Style_fn(MapView* __this, int32_t* value)
{
    __this->Style(*value);
}

// public double get_Tilt() :197
void MapView__get_Tilt_fn(MapView* __this, double* __retval)
{
    *__retval = __this->Tilt();
}

// public void UpdateMarkers() :167
void MapView__UpdateMarkers_fn(MapView* __this)
{
    __this->UpdateMarkers();
}

// public double get_Zoom() :153
void MapView__get_Zoom_fn(MapView* __this, double* __retval)
{
    *__retval = __this->Zoom();
}

// private MapView(Fuse.Controls.MapView mapViewHost, Java.Object map) [instance] :34
void MapView::ctor_9(::g::Fuse::Controls::MapView* mapViewHost, ::g::Java::Object* map)
{
    uStackFrame __("Fuse.Maps.Android.MapView", ".ctor(Fuse.Controls.MapView,Java.Object)");
    ctor_7(map);
    IsReady(false);
    _mapView = map;
    _mapViewHost = mapViewHost;
    _markerGraphicsCache = ::g::Fuse::Maps::MarkerIconCache::New1(uDelegate::New(::g::Uno::Action_typeof(), (void*)MapView__UpdateMarkers_fn, this));
    ::g::Fuse::Maps::Android::ForeignHelpers::SetMapEventHandlers(_mapView, uDelegate::New(::g::Uno::Action_typeof(), (void*)MapView__OnMapReady_fn, this), uDelegate::New(::g::Uno::Action2_typeof()->MakeType(::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), NULL), (void*)MapView__HandleLocationLongPress_fn, this), uDelegate::New(::g::Uno::Action2_typeof()->MakeType(::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), NULL), (void*)MapView__HandleLocationTapped_fn, this), uDelegate::New(::g::Uno::Action_typeof(), (void*)MapView__OnAnimationStart_fn, this), uDelegate::New(::g::Uno::Action_typeof(), (void*)MapView__OnAnimationEnd_fn, this), uDelegate::New(::g::Uno::Action2_typeof()->MakeType(::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), NULL), (void*)MapView__SetLocationFromMap_fn, this), uDelegate::New(::g::Uno::Action2_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::String_typeof(), NULL), (void*)MapView__HandleMarkerTapped_fn, this), uDelegate::New(::g::Uno::Action3_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), NULL), (void*)MapView__OnTouchEvent_fn, this));
    ::g::Fuse::Maps::Android::ForeignHelpers::Configure(_mapView);
    uPtr(SemanticControl())->MapViewClient((uObject*)this);
}

// public bool get_AllowRotate() [instance] :318
bool MapView::AllowRotate()
{
    return _allowRotate;
}

// public void set_AllowRotate(bool value) [instance] :321
void MapView::AllowRotate(bool value)
{
    _allowRotate = value;
    ConfigGestures();
}

// public bool get_AllowScroll() [instance] :329
bool MapView::AllowScroll()
{
    return _allowScroll;
}

// public void set_AllowScroll(bool value) [instance] :332
void MapView::AllowScroll(bool value)
{
    _allowScroll = value;
    ConfigGestures();
}

// public bool get_AllowTilt() [instance] :307
bool MapView::AllowTilt()
{
    return _allowTilt;
}

// public void set_AllowTilt(bool value) [instance] :310
void MapView::AllowTilt(bool value)
{
    _allowTilt = value;
    ConfigGestures();
}

// public bool get_AllowZoom() [instance] :296
bool MapView::AllowZoom()
{
    return _allowZoom;
}

// public void set_AllowZoom(bool value) [instance] :299
void MapView::AllowZoom(bool value)
{
    _allowZoom = value;
    ConfigGestures();
}

// public double get_Bearing() [instance] :191
double MapView::Bearing()
{
    return (double)::g::Fuse::Maps::Android::ForeignHelpers::GetOrientation(_mapView);
}

// private void ConfigGestures() [instance] :223
void MapView::ConfigGestures()
{
    if (IsReady())
        ::g::Fuse::Maps::Android::ForeignHelpers::ConfigureGestures(_mapView, _allowZoom, _allowRotate, _allowTilt, _allowScroll);
}

// private void ConfigUI() [instance] :219
void MapView::ConfigUI()
{
    if (IsReady())
        ::g::Fuse::Maps::Android::ForeignHelpers::ConfigureUI(_mapView, _showCompass, _showLocationButton);
}

// public void HandleLocationLongPress(double latitude, double longitude) [instance] :106
void MapView::HandleLocationLongPress(double latitude, double longitude)
{
    uStackFrame __("Fuse.Maps.Android.MapView", "HandleLocationLongPress(double,double)");
    uPtr(SemanticControl())->HandleLocationLongPress(latitude, longitude);
}

// public void HandleLocationTapped(double latitude, double longitude) [instance] :101
void MapView::HandleLocationTapped(double latitude, double longitude)
{
    uStackFrame __("Fuse.Maps.Android.MapView", "HandleLocationTapped(double,double)");
    uPtr(SemanticControl())->HandleLocationTapped(latitude, longitude);
}

// public void HandleMarkerTapped(int uid, string title) [instance] :111
void MapView::HandleMarkerTapped(int32_t uid, uString* title)
{
    uStackFrame __("Fuse.Maps.Android.MapView", "HandleMarkerTapped(int,string)");
    uPtr(SemanticControl())->HandleMarkerTapped(uid, title);
}

// public generated bool get_IsReady() [instance] :20
bool MapView::IsReady()
{
    return _IsReady;
}

// private generated void set_IsReady(bool value) [instance] :20
void MapView::IsReady(bool value)
{
    _IsReady = value;
}

// public double get_Latitude() [instance] :203
double MapView::Latitude()
{
    return ::g::Fuse::Maps::Android::ForeignHelpers::GetPositionLat(_mapView);
}

// public double get_Longitude() [instance] :209
double MapView::Longitude()
{
    return ::g::Fuse::Maps::Android::ForeignHelpers::GetPositionLong(_mapView);
}

// public Uno.Collections.ObservableList<Fuse.Controls.MapMarker> get_Markers() [instance] :161
::g::Uno::Collections::ObservableList* MapView::Markers()
{
    uStackFrame __("Fuse.Maps.Android.MapView", "get_Markers()");
    return uPtr(SemanticControl())->Markers();
}

// public void MoveTo(double latitude, double longitude, double zoomlevel, double tilt, double orientation) [instance] :214
void MapView::MoveTo(double latitude, double longitude, double zoomlevel, double tilt, double orientation)
{
    ::g::Fuse::Maps::Android::ForeignHelpers::MoveCamera(_mapView, latitude, longitude, (float)zoomlevel, (float)tilt, (float)orientation, 0.0);
}

// private void OnAnimationEnd() [instance] :83
void MapView::OnAnimationEnd()
{
    uStackFrame __("Fuse.Maps.Android.MapView", "OnAnimationEnd()");
    uPtr(SemanticControl())->OnMapInteractionEnd();
}

// private void OnAnimationStart() [instance] :77
void MapView::OnAnimationStart()
{
    uStackFrame __("Fuse.Maps.Android.MapView", "OnAnimationStart()");
    uPtr(SemanticControl())->OnMapInteractionStart();
}

// internal void OnMapReady() [instance] :116
void MapView::OnMapReady()
{
    uStackFrame __("Fuse.Maps.Android.MapView", "OnMapReady()");
    IsReady(true);
    Style(_mapStyleInternal);
    ShowMyLocation(_showLocation);
    ConfigUI();
    ConfigGestures();
    UpdateMarkers();
    uPtr(OnReady())->InvokeVoid();
}

// public generated Uno.Action get_OnReady() [instance] :21
uDelegate* MapView::OnReady()
{
    return _OnReady;
}

// public generated void set_OnReady(Uno.Action value) [instance] :21
void MapView::OnReady(uDelegate* value)
{
    _OnReady = value;
}

// private void OnTouchEvent(int action, float x, float y) [instance] :88
void MapView::OnTouchEvent(int32_t action, float x, float y)
{
    uStackFrame __("Fuse.Maps.Android.MapView", "OnTouchEvent(int,float,float)");

    switch (action)
    {
        case 0:
        {
            uPtr(SemanticControl())->OnMapInteractionStart();
            break;
        }
        case 1:
        {
            uPtr(SemanticControl())->OnMapInteractionEnd();
            break;
        }
    }
}

// private Fuse.Controls.MapView get_SemanticControl() [instance] :68
::g::Fuse::Controls::MapView* MapView::SemanticControl()
{
    return _mapViewHost;
}

// public void SetLocation(double latitude, double longitude) [instance] :185
void MapView::SetLocation(double latitude, double longitude)
{
    if (IsReady())
        ::g::Fuse::Maps::Android::ForeignHelpers::SetPosition(_mapView, latitude, longitude, 0.0);
}

// private void SetLocationFromMap(double lat, double lng) [instance] :71
void MapView::SetLocationFromMap(double lat, double lng)
{
    uStackFrame __("Fuse.Maps.Android.MapView", "SetLocationFromMap(double,double)");

    if (uPtr(SemanticControl())->UserInteractingWithMap())
        uPtr(SemanticControl())->UpdateRestState();
}

// public bool get_ShowCompass() [instance] :286
bool MapView::ShowCompass()
{
    return _showCompass;
}

// public void set_ShowCompass(bool value) [instance] :289
void MapView::ShowCompass(bool value)
{
    _showCompass = value;
    ConfigUI();
}

// public bool get_ShowMyLocation() [instance] :248
bool MapView::ShowMyLocation()
{
    return _showLocation;
}

// public void set_ShowMyLocation(bool value) [instance] :251
void MapView::ShowMyLocation(bool value)
{
    uStackFrame __("Fuse.Maps.Android.MapView", "set_ShowMyLocation(bool)");
    uArray* array4;
    _showLocation = value;

    if (IsReady())
    {
        if (_showLocation)
        {
            array4 = uArray::New(::g::Uno::Permissions::PlatformPermission_typeof()->Array(), 2);
            uPtr(array4)->Item< ::g::Uno::Permissions::PlatformPermission>(0) = ::g::Uno::Permissions::Permissions__Android::ACCESS_FINE_LOCATION();
            uPtr(array4)->Item< ::g::Uno::Permissions::PlatformPermission>(1) = ::g::Uno::Permissions::Permissions__Android::ACCESS_COARSE_LOCATION();
            uArray* permissions = array4;
            MapView__ShowLocationCommand* cmd = MapView__ShowLocationCommand::New1(_mapView, _showLocation);
            uPtr(::g::Uno::Permissions::Permissions::Request1(permissions))->Then1(uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Uno::Permissions::PlatformPermission_typeof()->Array(), NULL), (void*)MapView__ShowLocationCommand__Execute_fn, cmd), uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL), (void*)MapView__ShowLocationCommand__Reject_fn, cmd));
        }
        else
            ::g::Fuse::Maps::Android::ForeignHelpers::SetMyLocationEnabled(_mapView, _showLocation);
    }
}

// public bool get_ShowMyLocationButton() [instance] :275
bool MapView::ShowMyLocationButton()
{
    return _showLocationButton;
}

// public void set_ShowMyLocationButton(bool value) [instance] :278
void MapView::ShowMyLocationButton(bool value)
{
    _showLocationButton = value;
    ConfigUI();
}

// public Fuse.Controls.MapStyle get_Style() [instance] :131
int32_t MapView::Style()
{
    return _mapStyleInternal;
}

// public void set_Style(Fuse.Controls.MapStyle value) [instance] :132
void MapView::Style(int32_t value)
{
    _mapStyleInternal = value;

    if (IsReady())

        switch (_mapStyleInternal)
        {
            case 1:
            {
                ::g::Fuse::Maps::Android::ForeignHelpers::SetSatelliteStyle(_mapView);
                break;
            }
            case 2:
            {
                ::g::Fuse::Maps::Android::ForeignHelpers::SetHybridStyle(_mapView);
                break;
            }
            default:
            {
                ::g::Fuse::Maps::Android::ForeignHelpers::SetNormalStyle(_mapView);
                break;
            }
        }
}

// public double get_Tilt() [instance] :197
double MapView::Tilt()
{
    return (double)::g::Fuse::Maps::Android::ForeignHelpers::GetTilt(_mapView);
}

// public void UpdateMarkers() [instance] :167
void MapView::UpdateMarkers()
{
    uStackFrame __("Fuse.Maps.Android.MapView", "UpdateMarkers()");
    ::g::Fuse::Controls::MapMarker* ret3;

    if (!IsReady())
        return;

    ::g::Fuse::Maps::Android::ForeignHelpers::Clear(_mapView);
    uObject* enum1 = (uObject*)uPtr(Markers())->GetEnumerator();

    {
        try
        {
            {
                while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())))
                {
                    ::g::Fuse::Controls::MapMarker* m = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Controls::MapMarker_typeof(), NULL)), &ret3), ret3);
                    ::g::Fuse::Maps::Android::ForeignHelpers::AddMarker(_mapView, uPtr(m)->Latitude(), uPtr(m)->Longitude(), uPtr(m)->Label(), uPtr(_markerGraphicsCache)->Get(uPtr(m)->IconFile()), uPtr(m)->IconAnchorX(), uPtr(m)->IconAnchorY(), uPtr(m)->uid);
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::g::Uno::IDisposable_typeof()));
            }
                        throw __t;
            goto __after_finally_0;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::g::Uno::IDisposable_typeof()));
        }
        __after_finally_0:;
    }
}

// public double get_Zoom() [instance] :153
double MapView::Zoom()
{
    if (!IsReady())
        return 0.0;

    return (double)::g::Fuse::Maps::Android::ForeignHelpers::GetZoom(_mapView);
}

// public static Fuse.Maps.Android.MapView Create(Fuse.Controls.MapView mapViewHost) [static] :24
MapView* MapView::Create(::g::Fuse::Controls::MapView* mapViewHost)
{
    ::g::Java::Object* m = ::g::Fuse::Maps::Android::ForeignHelpers::CreateMap();
    return MapView::New5(mapViewHost, m);
}

// private MapView New(Fuse.Controls.MapView mapViewHost, Java.Object map) [static] :34
MapView* MapView::New5(::g::Fuse::Controls::MapView* mapViewHost, ::g::Java::Object* map)
{
    MapView* obj2 = (MapView*)uNew(MapView_typeof());
    obj2->ctor_9(mapViewHost, map);
    return obj2;
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Maps\1.8.1\Android\MapView.uno
// -----------------------------------------------------------------------------------

// private sealed class MapView.ShowLocationCommand :227
// {
static void MapView__ShowLocationCommand_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Could not acquire location permissions");
    ::STRINGS[1] = uString::Const("C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.Maps/1.8.1/Android/MapView.uno");
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof());
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(MapView__ShowLocationCommand, _value), 0,
        ::g::Java::Object_typeof(), offsetof(MapView__ShowLocationCommand, _handle), 0);
}

uType* MapView__ShowLocationCommand_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(MapView__ShowLocationCommand);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Maps.Android.MapView.ShowLocationCommand", options);
    type->fp_build_ = MapView__ShowLocationCommand_build;
    return type;
}

// public ShowLocationCommand(Java.Object handle, bool newValue) :231
void MapView__ShowLocationCommand__ctor__fn(MapView__ShowLocationCommand* __this, ::g::Java::Object* handle, bool* newValue)
{
    __this->ctor_(handle, *newValue);
}

// public void Execute(Uno.Permissions.PlatformPermission[] grantedPermissions) :236
void MapView__ShowLocationCommand__Execute_fn(MapView__ShowLocationCommand* __this, uArray* grantedPermissions)
{
    __this->Execute(grantedPermissions);
}

// public ShowLocationCommand New(Java.Object handle, bool newValue) :231
void MapView__ShowLocationCommand__New1_fn(::g::Java::Object* handle, bool* newValue, MapView__ShowLocationCommand** __retval)
{
    *__retval = MapView__ShowLocationCommand::New1(handle, *newValue);
}

// public void Reject(Uno.Exception e) :240
void MapView__ShowLocationCommand__Reject_fn(MapView__ShowLocationCommand* __this, ::g::Uno::Exception* e)
{
    __this->Reject(e);
}

// public ShowLocationCommand(Java.Object handle, bool newValue) [instance] :231
void MapView__ShowLocationCommand::ctor_(::g::Java::Object* handle, bool newValue)
{
    _handle = handle;
    _value = newValue;
}

// public void Execute(Uno.Permissions.PlatformPermission[] grantedPermissions) [instance] :236
void MapView__ShowLocationCommand::Execute(uArray* grantedPermissions)
{
    ::g::Fuse::Maps::Android::ForeignHelpers::SetMyLocationEnabled(_handle, _value);
}

// public void Reject(Uno.Exception e) [instance] :240
void MapView__ShowLocationCommand::Reject(::g::Uno::Exception* e)
{
    uStackFrame __("Fuse.Maps.Android.MapView.ShowLocationCommand", "Reject(Uno.Exception)");
    ::g::Uno::Diagnostics::Debug::Log3(::STRINGS[0/*"Could not a...*/], 0, ::STRINGS[1/*"C:/Users/ru...*/], 242);
}

// public ShowLocationCommand New(Java.Object handle, bool newValue) [static] :231
MapView__ShowLocationCommand* MapView__ShowLocationCommand::New1(::g::Java::Object* handle, bool newValue)
{
    MapView__ShowLocationCommand* obj1 = (MapView__ShowLocationCommand*)uNew(MapView__ShowLocationCommand_typeof());
    obj1->ctor_(handle, newValue);
    return obj1;
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Maps\1.8.1\Android\MapView.uno
// -----------------------------------------------------------------------------------

// internal enum TouchAction :10
uEnumType* TouchAction_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Maps.Android.TouchAction", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "DOWN", 0LL,
        "UP", 1LL,
        "MOVE", 2LL);
    return type;
}

}}}} // ::g::Fuse::Maps::Android
