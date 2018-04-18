// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <jni.h>
#include <Uno.Bool.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Permissions.Inter-b7b0d7de.h>
#include <Uno.Permissions.IPerm-63840be1.h>
#include <Uno.Permissions.Permi-d35d5681.h>
#include <Uno.Permissions.Permi-e850e8ab.h>
#include <Uno.Permissions.Permissions.h>
#include <Uno.Permissions.Platf-7d72d93e.h>
#include <Uno.String.h>
#include <Uno.Threading.Future1-1.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno/JNIHelper.h>

namespace g{
namespace Uno{
namespace Permissions{

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Uno.Permissions\1.8.0\Permissions.uno
// -------------------------------------------------------------------------------------

// public static extern class Permissions.Android :120
// {
static void Permissions__Android_build(uType* type)
{
    type->Reflection.SetFunctions(5,
        new uFunction("get_ACCESS_COARSE_LOCATION", NULL, (void*)Permissions__Android__get_ACCESS_COARSE_LOCATION_fn, 0, true, ::g::Uno::Permissions::PlatformPermission_typeof(), 0),
        new uFunction("get_ACCESS_FINE_LOCATION", NULL, (void*)Permissions__Android__get_ACCESS_FINE_LOCATION_fn, 0, true, ::g::Uno::Permissions::PlatformPermission_typeof(), 0),
        new uFunction("get_INTERNET", NULL, (void*)Permissions__Android__get_INTERNET_fn, 0, true, ::g::Uno::Permissions::PlatformPermission_typeof(), 0),
        new uFunction("get_READ_EXTERNAL_STORAGE", NULL, (void*)Permissions__Android__get_READ_EXTERNAL_STORAGE_fn, 0, true, ::g::Uno::Permissions::PlatformPermission_typeof(), 0),
        new uFunction("get_WRITE_EXTERNAL_STORAGE", NULL, (void*)Permissions__Android__get_WRITE_EXTERNAL_STORAGE_fn, 0, true, ::g::Uno::Permissions::PlatformPermission_typeof(), 0));
}

uClassType* Permissions__Android_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Permissions.Permissions.Android", options);
    type->fp_build_ = Permissions__Android_build;
    return type;
}

// public static Uno.Permissions.PlatformPermission get_ACCESS_COARSE_LOCATION() :123
void Permissions__Android__get_ACCESS_COARSE_LOCATION_fn(::g::Uno::Permissions::PlatformPermission* __retval)
{
    *__retval = Permissions__Android::ACCESS_COARSE_LOCATION();
}

// public static Uno.Permissions.PlatformPermission get_ACCESS_FINE_LOCATION() :124
void Permissions__Android__get_ACCESS_FINE_LOCATION_fn(::g::Uno::Permissions::PlatformPermission* __retval)
{
    *__retval = Permissions__Android::ACCESS_FINE_LOCATION();
}

// public static Uno.Permissions.PlatformPermission get_INTERNET() :192
void Permissions__Android__get_INTERNET_fn(::g::Uno::Permissions::PlatformPermission* __retval)
{
    *__retval = Permissions__Android::INTERNET();
}

// public static Uno.Permissions.PlatformPermission get_READ_EXTERNAL_STORAGE() :210
void Permissions__Android__get_READ_EXTERNAL_STORAGE_fn(::g::Uno::Permissions::PlatformPermission* __retval)
{
    *__retval = Permissions__Android::READ_EXTERNAL_STORAGE();
}

// public static Uno.Permissions.PlatformPermission get_WRITE_EXTERNAL_STORAGE() :262
void Permissions__Android__get_WRITE_EXTERNAL_STORAGE_fn(::g::Uno::Permissions::PlatformPermission* __retval)
{
    *__retval = Permissions__Android::WRITE_EXTERNAL_STORAGE();
}

// public static Uno.Permissions.PlatformPermission get_ACCESS_COARSE_LOCATION() [static] :123
::g::Uno::Permissions::PlatformPermission Permissions__Android::ACCESS_COARSE_LOCATION()
{
    return ::g::Uno::Permissions::Internal::Android::_access_coarse_location();
}

// public static Uno.Permissions.PlatformPermission get_ACCESS_FINE_LOCATION() [static] :124
::g::Uno::Permissions::PlatformPermission Permissions__Android::ACCESS_FINE_LOCATION()
{
    return ::g::Uno::Permissions::Internal::Android::_access_fine_location();
}

// public static Uno.Permissions.PlatformPermission get_INTERNET() [static] :192
::g::Uno::Permissions::PlatformPermission Permissions__Android::INTERNET()
{
    return ::g::Uno::Permissions::Internal::Android::_internet();
}

// public static Uno.Permissions.PlatformPermission get_READ_EXTERNAL_STORAGE() [static] :210
::g::Uno::Permissions::PlatformPermission Permissions__Android::READ_EXTERNAL_STORAGE()
{
    return ::g::Uno::Permissions::Internal::Android::_read_external_storage();
}

// public static Uno.Permissions.PlatformPermission get_WRITE_EXTERNAL_STORAGE() [static] :262
::g::Uno::Permissions::PlatformPermission Permissions__Android::WRITE_EXTERNAL_STORAGE()
{
    return ::g::Uno::Permissions::Internal::Android::_write_external_storage();
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Uno.Permissions\1.8.0\Permissions.uno
// -------------------------------------------------------------------------------------

// internal abstract interface IPermissionPromise :19
// {
uInterfaceType* IPermissionPromise_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Permissions.IPermissionPromise", 0, 0);
    return type;
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Uno.Permissions\1.8.0\Permissions.uno
// -------------------------------------------------------------------------------------

// public static extern class Permissions :53
// {
static void Permissions_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction("Request", NULL, (void*)Permissions__Request1_fn, 0, true, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Uno::Permissions::PlatformPermission_typeof()->Array(), NULL), 1, ::g::Uno::Permissions::PlatformPermission_typeof()->Array()));
}

uClassType* Permissions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Permissions.Permissions", options);
    type->fp_build_ = Permissions_build;
    return type;
}

// private static void Failed(object promise) :103
void Permissions__Failed_fn(uObject* promise)
{
    Permissions::Failed(promise);
}

// public static Uno.Threading.Future<Uno.Permissions.PlatformPermission[]> Request(Uno.Permissions.PlatformPermission[] x) :74
void Permissions__Request1_fn(uArray* x, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Permissions::Request1(x);
}

// private static void requestPermissions(Uno.Threading.Promise<Uno.Permissions.PlatformPermission[]> promise, string[] permissionNames) :93
void Permissions__requestPermissions_fn(::g::Uno::Threading::Promise* promise, uArray* permissionNames)
{
    Permissions::requestPermissions(promise, permissionNames);
}

// private static void Succeeded(object promise) :98
void Permissions__Succeeded_fn(uObject* promise)
{
    Permissions::Succeeded(promise);
}

// private static void Failed(object promise) [static] :103
void Permissions::Failed(uObject* promise)
{
    uStackFrame __("Uno.Permissions.Permissions", "Failed(object)");
    ::g::Uno::Permissions::IPermissionPromise::Reject(uInterface(uPtr((uObject*)promise), ::g::Uno::Permissions::IPermissionPromise_typeof()), ::g::Uno::Exception::New2(uString::Const("Permissions could not be requested or granted.")));
}

// public static Uno.Threading.Future<Uno.Permissions.PlatformPermission[]> Request(Uno.Permissions.PlatformPermission[] x) [static] :74
::g::Uno::Threading::Future1* Permissions::Request1(uArray* x)
{
    uStackFrame __("Uno.Permissions.Permissions", "Request(Uno.Permissions.PlatformPermission[])");
    ::g::Uno::Permissions::PermissionsPromise* futurePermission = ::g::Uno::Permissions::PermissionsPromise::New5(x);
    uArray* names = uArray::New(::g::Uno::String_typeof()->Array(), uPtr(x)->Length());

    for (int32_t i = 0; i < x->Length(); i++)
        uPtr(names)->Strong<uString*>(i) = uPtr(x)->Item< ::g::Uno::Permissions::PlatformPermission>(i).Name;

    Permissions::requestPermissions(futurePermission, names);
    return futurePermission;
}

// private static void requestPermissions(Uno.Threading.Promise<Uno.Permissions.PlatformPermission[]> promise, string[] permissionNames) [static] :93
void Permissions::requestPermissions(::g::Uno::Threading::Promise* promise, uArray* permissionNames)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "requestPermissions62", "(Lcom/uno/UnoObject;Lcom/uno/StringArray;)V");
        ::g::Uno::Threading::Promise* _upromise=promise;
        jobject _promise = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_upromise);
        uArray* _upermissionNames=permissionNames;
        jobject _permissionNames = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box10(_upermissionNames);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_promise,_permissionNames);
        
        if (_promise!=NULL) { U_JNIVAR->DeleteLocalRef(_promise); }
        if (_permissionNames!=NULL) { U_JNIVAR->DeleteLocalRef(_permissionNames); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void Succeeded(object promise) [static] :98
void Permissions::Succeeded(uObject* promise)
{
    uStackFrame __("Uno.Permissions.Permissions", "Succeeded(object)");
    ::g::Uno::Permissions::IPermissionPromise::Resolve(uInterface(uPtr((uObject*)promise), ::g::Uno::Permissions::IPermissionPromise_typeof()));
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Uno.Permissions\1.8.0\Permissions.uno
// -------------------------------------------------------------------------------------

// internal sealed class PermissionsPromise :39
// {
static void PermissionsPromise_build(uType* type)
{
    type->SetBase(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::Permissions::PlatformPermission_typeof()->Array(), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(PermissionsPromise_type, interface0),
        ::g::Uno::Permissions::IPermissionPromise_typeof(), offsetof(PermissionsPromise_type, interface1));
    type->SetFields(9,
        ::g::Uno::Permissions::PlatformPermission_typeof()->Array(), offsetof(PermissionsPromise, _permissions), 0);
}

PermissionsPromise_type* PermissionsPromise_typeof()
{
    static uSStrong<PermissionsPromise_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::Promise_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(PermissionsPromise);
    options.TypeSize = sizeof(PermissionsPromise_type);
    type = (PermissionsPromise_type*)uClassType::New("Uno.Permissions.PermissionsPromise", options);
    type->fp_build_ = PermissionsPromise_build;
    type->interface1.fp_Resolve = (void(*)(uObject*))PermissionsPromise__Resolve1_fn;
    type->interface1.fp_Reject = (void(*)(uObject*, ::g::Uno::Exception*))::g::Uno::Threading::Promise__Reject_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::Threading::Future1__Dispose_fn;
    return type;
}

// public PermissionsPromise(Uno.Permissions.PlatformPermission[] permissions) :42
void PermissionsPromise__ctor_7_fn(PermissionsPromise* __this, uArray* permissions)
{
    __this->ctor_7(permissions);
}

// public PermissionsPromise New(Uno.Permissions.PlatformPermission[] permissions) :42
void PermissionsPromise__New5_fn(uArray* permissions, PermissionsPromise** __retval)
{
    *__retval = PermissionsPromise::New5(permissions);
}

// public void Resolve() :47
void PermissionsPromise__Resolve1_fn(PermissionsPromise* __this)
{
    __this->Resolve1();
}

// public PermissionsPromise(Uno.Permissions.PlatformPermission[] permissions) [instance] :42
void PermissionsPromise::ctor_7(uArray* permissions)
{
    uStackFrame __("Uno.Permissions.PermissionsPromise", ".ctor(Uno.Permissions.PlatformPermission[])");
    ctor_3();
    _permissions = permissions;
}

// public void Resolve() [instance] :47
void PermissionsPromise::Resolve1()
{
    uStackFrame __("Uno.Permissions.PermissionsPromise", "Resolve()");
    ::g::Uno::Threading::Promise__Resolve_fn(this, _permissions);
}

// public PermissionsPromise New(Uno.Permissions.PlatformPermission[] permissions) [static] :42
PermissionsPromise* PermissionsPromise::New5(uArray* permissions)
{
    PermissionsPromise* obj1 = (PermissionsPromise*)uNew(PermissionsPromise_typeof());
    obj1->ctor_7(permissions);
    return obj1;
}
// }

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Uno.Permissions\1.8.0\Permissions.uno
// -------------------------------------------------------------------------------------

// public struct PlatformPermission :9
// {
static void PlatformPermission_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(PlatformPermission, Name), 0);
    type->Reflection.SetFields(1,
        new uField("Name", 0));
}

uStructType* PlatformPermission_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.Alignment = alignof(PlatformPermission);
    options.ValueSize = sizeof(PlatformPermission);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Permissions.PlatformPermission", options);
    type->fp_build_ = PlatformPermission_build;
    return type;
}

// internal PlatformPermission(string name) :13
void PlatformPermission__ctor__fn(PlatformPermission* __this, uString* name)
{
    __this->ctor_(name);
}

// internal PlatformPermission New(string name) :13
void PlatformPermission__New1_fn(uString* name, PlatformPermission* __retval)
{
    *__retval = PlatformPermission__New1(name);
}

// internal PlatformPermission(string name) [instance] :13
void PlatformPermission::ctor_(uString* name)
{
    Name = name;
}

// internal PlatformPermission New(string name) [static] :13
PlatformPermission PlatformPermission__New1(uString* name)
{
    PlatformPermission obj1;
    obj1.ctor_(name);
    return obj1;
}
// }

}}} // ::g::Uno::Permissions
