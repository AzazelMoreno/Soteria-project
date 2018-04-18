// This file was generated based on 'C:/Users/rudy0/Desktop/Please Work/Please Work.unoproj'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.PleaseWork_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[6];

namespace g{

// public static generated class PleaseWork_bundle :0
// {
// static PleaseWork_bundle() :0
static void PleaseWork_bundle__cctor__fn(uType* __type)
{
    ::g::Uno::IO::Bundle_typeof()->Init();
    PleaseWork_bundle::Backend35dff620_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Please Work"*/]))->GetFile(::STRINGS[1/*"backend-673...*/]);
    PleaseWork_bundle::CA304d7af5_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Please Work"*/]))->GetFile(::STRINGS[2/*"ca-7378c6be...*/]);
    PleaseWork_bundle::HomePagec8a528f3_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Please Work"*/]))->GetFile(::STRINGS[3/*"homepage-a6...*/]);
    PleaseWork_bundle::Megrim125d4bdc_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Please Work"*/]))->GetFile(::STRINGS[4/*"megrim-f99e...*/]);
    PleaseWork_bundle::SplashPage4e21836d_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Please Work"*/]))->GetFile(::STRINGS[5/*"splashpage-...*/]);
}

static void PleaseWork_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Please Work");
    ::STRINGS[1] = uString::Const("backend-673694f5.js");
    ::STRINGS[2] = uString::Const("ca-7378c6be.png");
    ::STRINGS[3] = uString::Const("homepage-a66ffa00.js");
    ::STRINGS[4] = uString::Const("megrim-f99ec396.ttf");
    ::STRINGS[5] = uString::Const("splashpage-7fac3464.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&PleaseWork_bundle::Backend35dff620_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&PleaseWork_bundle::CA304d7af5_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&PleaseWork_bundle::HomePagec8a528f3_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&PleaseWork_bundle::Megrim125d4bdc_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&PleaseWork_bundle::SplashPage4e21836d_, uFieldFlagsStatic);
    type->Reflection.SetFields(5,
        new uField("Backend35dff620", 0),
        new uField("CA304d7af5", 1),
        new uField("HomePagec8a528f3", 2),
        new uField("Megrim125d4bdc", 3),
        new uField("SplashPage4e21836d", 4));
}

uClassType* PleaseWork_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("PleaseWork_bundle", options);
    type->fp_build_ = PleaseWork_bundle_build;
    type->fp_cctor_ = PleaseWork_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> PleaseWork_bundle::Backend35dff620_;
uSStrong< ::g::Uno::IO::BundleFile*> PleaseWork_bundle::CA304d7af5_;
uSStrong< ::g::Uno::IO::BundleFile*> PleaseWork_bundle::HomePagec8a528f3_;
uSStrong< ::g::Uno::IO::BundleFile*> PleaseWork_bundle::Megrim125d4bdc_;
uSStrong< ::g::Uno::IO::BundleFile*> PleaseWork_bundle::SplashPage4e21836d_;
// }

} // ::g
