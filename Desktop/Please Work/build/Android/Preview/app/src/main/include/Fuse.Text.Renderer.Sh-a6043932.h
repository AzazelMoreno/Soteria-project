// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.Text/1.8.1/Renderer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Text{struct Renderer__SharedIndexBuffer;}}}
namespace g{namespace Uno{namespace Graphics{struct IndexBuffer;}}}

namespace g{
namespace Fuse{
namespace Text{

// internal static class Renderer.SharedIndexBuffer :268
// {
uClassType* Renderer__SharedIndexBuffer_typeof();
void Renderer__SharedIndexBuffer__EnsureSize_fn(int32_t* length);
void Renderer__SharedIndexBuffer__Release_fn();
void Renderer__SharedIndexBuffer__Retain_fn();

struct Renderer__SharedIndexBuffer : uObject
{
    static int32_t _length_;
    static int32_t& _length() { return _length_; }
    static int32_t _refCount_;
    static int32_t& _refCount() { return _refCount_; }
    static uSStrong< ::g::Uno::Graphics::IndexBuffer*> IndexBuffer_;
    static uSStrong< ::g::Uno::Graphics::IndexBuffer*>& IndexBuffer() { return IndexBuffer_; }

    static void EnsureSize(int32_t length);
    static void Release();
    static void Retain();
};
// }

}}} // ::g::Fuse::Text
