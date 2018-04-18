// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.ImageTools/1.8.1/ImageTools.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ImageTools.PCommand.h>
namespace g{namespace Fuse{namespace ImageTools{struct ImageTools__ImageFromBase64Command;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace ImageTools{

// private sealed extern class ImageTools.ImageFromBase64Command :394
// {
::g::Fuse::ImageTools::PCommand_type* ImageTools__ImageFromBase64Command_typeof();
void ImageTools__ImageFromBase64Command__ctor_1_fn(ImageTools__ImageFromBase64Command* __this, uString* base64Image, uDelegate* Resolve, uDelegate* Reject);
void ImageTools__ImageFromBase64Command__New1_fn(uString* base64Image, uDelegate* Resolve, uDelegate* Reject, ImageTools__ImageFromBase64Command** __retval);
void ImageTools__ImageFromBase64Command__OnGranted_fn(ImageTools__ImageFromBase64Command* __this);
void ImageTools__ImageFromBase64Command__OnRejected_fn(ImageTools__ImageFromBase64Command* __this, ::g::Uno::Exception* e);

struct ImageTools__ImageFromBase64Command : ::g::Fuse::ImageTools::PCommand
{
    uStrong<uString*> _base64Image;
    uStrong<uDelegate*> _resolve;
    uStrong<uDelegate*> _reject;

    void ctor_1(uString* base64Image, uDelegate* Resolve, uDelegate* Reject);
    static ImageTools__ImageFromBase64Command* New1(uString* base64Image, uDelegate* Resolve, uDelegate* Reject);
};
// }

}}} // ::g::Fuse::ImageTools
