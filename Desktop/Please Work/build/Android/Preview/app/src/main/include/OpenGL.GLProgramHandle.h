// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/UnoCore/1.8.0/Source/OpenGL/GLProgramHandle.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace OpenGL{

// public extern struct GLProgramHandle :11
// {
uStructType* GLProgramHandle_typeof();
void GLProgramHandle__Equals_fn(uint32_t* __this, uType* __type, uObject* obj, bool* __retval);
void GLProgramHandle__GetHashCode_fn(uint32_t* __this, uType* __type, int32_t* __retval);

struct GLProgramHandle
{
    static uint32_t Zero_;
    static uint32_t& Zero() { return Zero_; }

    static bool Equals(uint32_t __this, uType* __type, uObject* obj) { bool __retval; return GLProgramHandle__Equals_fn(&__this, __type, obj, &__retval), __retval; }
    static int32_t GetHashCode(uint32_t __this, uType* __type) { int32_t __retval; return GLProgramHandle__GetHashCode_fn(&__this, __type, &__retval), __retval; }
};
// }

}} // ::g::OpenGL
