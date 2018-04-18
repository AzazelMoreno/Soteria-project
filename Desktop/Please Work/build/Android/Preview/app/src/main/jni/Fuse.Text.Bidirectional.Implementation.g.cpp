// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Fuse.Text.Bidirection-8e078637.h>
#include <Fuse.Text.Bidirectional.Run.h>
#include <Fuse.Text.Substring.h>
#include <Java.Object.h>
#include <jni.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <Uno/JNIHelper.h>
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace Text{
namespace Bidirectional{
namespace Implementation{

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Fuse.Text\1.8.1\Implementation\JavaBidirectional.uno
// ----------------------------------------------------------------------------------------------------

// internal static extern class JavaRuns :8
// {
static void JavaRuns_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::Bidirectional::Run_typeof(), NULL);
}

uClassType* JavaRuns_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Text.Bidirectional.Implementation.JavaRuns", options);
    type->fp_build_ = JavaRuns_build;
    return type;
}

// private static Java.Object Create(string text) :28
void JavaRuns__Create_fn(uString* text, ::g::Java::Object** __retval)
{
    *__retval = JavaRuns::Create(text);
}

// public static Uno.Collections.List<Fuse.Text.Bidirectional.Run> GetLogical(Fuse.Text.Substring text) :10
void JavaRuns__GetLogical_fn(::g::Fuse::Text::Substring* text, ::g::Uno::Collections::List** __retval)
{
    *__retval = JavaRuns::GetLogical(text);
}

// private static int GetRunCount(Java.Object handle) :34
void JavaRuns__GetRunCount_fn(::g::Java::Object* handle, int32_t* __retval)
{
    *__retval = JavaRuns::GetRunCount(handle);
}

// private static int GetRunLevel(Java.Object handle, int run) :58
void JavaRuns__GetRunLevel_fn(::g::Java::Object* handle, int32_t* run, int32_t* __retval)
{
    *__retval = JavaRuns::GetRunLevel(handle, *run);
}

// private static int GetRunLimit(Java.Object handle, int run) :52
void JavaRuns__GetRunLimit_fn(::g::Java::Object* handle, int32_t* run, int32_t* __retval)
{
    *__retval = JavaRuns::GetRunLimit(handle, *run);
}

// private static int GetRunStart(Java.Object handle, int run) :46
void JavaRuns__GetRunStart_fn(::g::Java::Object* handle, int32_t* run, int32_t* __retval)
{
    *__retval = JavaRuns::GetRunStart(handle, *run);
}

// private static Java.Object Create(string text) [static] :28
::g::Java::Object* JavaRuns::Create(uString* text)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create309", "(Ljava/lang/String;)Ljava/lang/Object;");
        uString* _utext=text;
        jstring _text = JniHelper::UnoToJavaString(_utext);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_text);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_text!=NULL) { U_JNIVAR->DeleteLocalRef(_text); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static Uno.Collections.List<Fuse.Text.Bidirectional.Run> GetLogical(Fuse.Text.Substring text) [static] :10
::g::Uno::Collections::List* JavaRuns::GetLogical(::g::Fuse::Text::Substring* text)
{
    uStackFrame __("Fuse.Text.Bidirectional.Implementation.JavaRuns", "GetLogical(Fuse.Text.Substring)");
    ::g::Uno::Collections::List* result = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<Fuse.Text.Bidirectional.Run>*/]);
    ::g::Java::Object* handle = JavaRuns::Create(uPtr(text)->ToString());
    int32_t count = JavaRuns::GetRunCount(handle);

    for (int32_t run = 0; run < count; ++run)
    {
        int32_t start = JavaRuns::GetRunStart(handle, run);
        int32_t limit = JavaRuns::GetRunLimit(handle, run);
        ::g::Fuse::Text::Substring* str = uPtr(text)->GetSubstring1(start, limit - start);
        ::g::Uno::Collections::List__Add_fn(uPtr(result), uCRef(::g::Fuse::Text::Bidirectional::Run__New1(str, JavaRuns::GetRunLevel(handle, run))));
    }

    return result;
}

// private static int GetRunCount(Java.Object handle) [static] :34
int32_t JavaRuns::GetRunCount(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetRunCount311", "(Ljava/lang/Object;)I");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_handle);
        int32_t __result = (int32_t)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetRunLevel(Java.Object handle, int run) [static] :58
int32_t JavaRuns::GetRunLevel(::g::Java::Object* handle, int32_t run)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetRunLevel312", "(Ljava/lang/Object;I)I");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _urun=run;
        jint _run = (jint)_urun;
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_handle,_run);
        int32_t __result = (int32_t)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetRunLimit(Java.Object handle, int run) [static] :52
int32_t JavaRuns::GetRunLimit(::g::Java::Object* handle, int32_t run)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetRunLimit313", "(Ljava/lang/Object;I)I");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _urun=run;
        jint _run = (jint)_urun;
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_handle,_run);
        int32_t __result = (int32_t)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetRunStart(Java.Object handle, int run) [static] :46
int32_t JavaRuns::GetRunStart(::g::Java::Object* handle, int32_t run)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetRunStart314", "(Ljava/lang/Object;I)I");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _urun=run;
        jint _run = (jint)_urun;
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_handle,_run);
        int32_t __result = (int32_t)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}
// }

}}}}} // ::g::Fuse::Text::Bidirectional::Implementation
