// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.ImageTools/1.8.1/ImageTools.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ImageTools.PCommand.h>
namespace g{namespace Fuse{namespace ImageTools{struct ImageTools__GetBase64Command;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace ImageTools{

// private sealed extern class ImageTools.GetBase64Command :358
// {
::g::Fuse::ImageTools::PCommand_type* ImageTools__GetBase64Command_typeof();
void ImageTools__GetBase64Command__ctor_1_fn(ImageTools__GetBase64Command* __this, uString* path, uDelegate* Resolve, uDelegate* Reject);
void ImageTools__GetBase64Command__New1_fn(uString* path, uDelegate* Resolve, uDelegate* Reject, ImageTools__GetBase64Command** __retval);
void ImageTools__GetBase64Command__OnGranted_fn(ImageTools__GetBase64Command* __this);
void ImageTools__GetBase64Command__OnRejected_fn(ImageTools__GetBase64Command* __this, ::g::Uno::Exception* e);

struct ImageTools__GetBase64Command : ::g::Fuse::ImageTools::PCommand
{
    uStrong<uString*> _path;
    uStrong<uDelegate*> _resolve;
    uStrong<uDelegate*> _reject;

    void ctor_1(uString* path, uDelegate* Resolve, uDelegate* Reject);
    static ImageTools__GetBase64Command* New1(uString* path, uDelegate* Resolve, uDelegate* Reject);
};
// }

}}} // ::g::Fuse::ImageTools
