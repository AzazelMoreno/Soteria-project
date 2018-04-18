[Uno.Compiler.UxGenerated]
public partial class SplashPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router"
    };
    static SplashPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public SplashPage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp1 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp2 = new global::Fuse.Controls.Image();
        temp.LineNumber = 3;
        temp.FileName = "Pages/SplashPage.ux";
        temp.File = new global::Uno.UX.BundleFileSource(import("../../../Pages/SplashPage.js"));
        temp1.LineNumber = 4;
        temp1.FileName = "Pages/SplashPage.ux";
        temp1.File = new global::Uno.UX.BundleFileSource(import("../../../Modules/Backend.js"));
        temp2.Layer = Fuse.Layer.Background;
        temp2.File = new global::Uno.UX.BundleFileSource(import("../../../Components/CA.png"));
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Children.Add(temp);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
    }
}
