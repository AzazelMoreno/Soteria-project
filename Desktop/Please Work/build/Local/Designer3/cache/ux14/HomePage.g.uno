[Uno.Compiler.UxGenerated]
public partial class HomePage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router"
    };
    static HomePage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public HomePage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp1 = new global::Fuse.Controls.NativeViewHost();
        var temp2 = new global::Fuse.Controls.MapView();
        var temp3 = new global::Fuse.Controls.MapMarker();
        temp.LineNumber = 3;
        temp.FileName = "Pages/HomePage.ux";
        temp.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/HomePage.js"));
        temp1.Children.Add(temp2);
        temp2.Zoom = 10;
        temp2.Latitude = 59.911567;
        temp2.Longitude = 10.74103;
        temp2.Children.Add(temp3);
        temp3.Label = "Fuse Place";
        temp3.Latitude = 59.911567;
        temp3.Longitude = 10.74103;
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Children.Add(temp);
        this.Children.Add(temp1);
    }
}
