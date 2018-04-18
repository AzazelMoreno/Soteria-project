// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.Text/1.8.1/Implementation/JavaBidirectional.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Text{namespace Bidirectional{namespace Implementation{struct JavaRuns;}}}}}
namespace g{namespace Fuse{namespace Text{namespace Bidirectional{struct Run;}}}}
namespace g{namespace Fuse{namespace Text{struct Substring;}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Text{
namespace Bidirectional{
namespace Implementation{

// internal static extern class JavaRuns :8
// {
uClassType* JavaRuns_typeof();
void JavaRuns__Create_fn(uString* text, ::g::Java::Object** __retval);
void JavaRuns__GetLogical_fn(::g::Fuse::Text::Substring* text, ::g::Uno::Collections::List** __retval);
void JavaRuns__GetRunCount_fn(::g::Java::Object* handle, int32_t* __retval);
void JavaRuns__GetRunLevel_fn(::g::Java::Object* handle, int32_t* run, int32_t* __retval);
void JavaRuns__GetRunLimit_fn(::g::Java::Object* handle, int32_t* run, int32_t* __retval);
void JavaRuns__GetRunStart_fn(::g::Java::Object* handle, int32_t* run, int32_t* __retval);

struct JavaRuns : uObject
{
    static ::g::Java::Object* Create(uString* text);
    static ::g::Uno::Collections::List* GetLogical(::g::Fuse::Text::Substring* text);
    static int32_t GetRunCount(::g::Java::Object* handle);
    static int32_t GetRunLevel(::g::Java::Object* handle, int32_t run);
    static int32_t GetRunLimit(::g::Java::Object* handle, int32_t run);
    static int32_t GetRunStart(::g::Java::Object* handle, int32_t run);
};
// }

}}}}} // ::g::Fuse::Text::Bidirectional::Implementation
