[Uno.Compiler.UxGenerated]
public partial class HomePage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<double> temp_Latitude_inst;
    global::Uno.UX.Property<double> temp_Longitude_inst;
    global::Uno.UX.Property<double> temp1_Latitude_inst;
    global::Uno.UX.Property<double> temp1_Longitude_inst;
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
        var temp2 = new global::Fuse.Reactive.Data("locale");
        var temp = new global::Fuse.Controls.MapMarker();
        temp_Latitude_inst = new PleaseWork_FuseControlsMapMarker_Latitude_Property(temp, __selector0);
        var temp3 = new global::Fuse.Reactive.Member(temp2, "latitude");
        var temp4 = new global::Fuse.Reactive.Data("locale");
        temp_Longitude_inst = new PleaseWork_FuseControlsMapMarker_Longitude_Property(temp, __selector1);
        var temp5 = new global::Fuse.Reactive.Member(temp4, "longitude");
        var temp6 = new global::Fuse.Reactive.Data("locale");
        var temp1 = new global::Fuse.Controls.MapView();
        temp1_Latitude_inst = new PleaseWork_FuseControlsMapView_Latitude_Property(temp1, __selector0);
        var temp7 = new global::Fuse.Reactive.Member(temp6, "latitude");
        var temp8 = new global::Fuse.Reactive.Data("locale");
        temp1_Longitude_inst = new PleaseWork_FuseControlsMapView_Longitude_Property(temp1, __selector1);
        var temp9 = new global::Fuse.Reactive.Member(temp8, "longitude");
        var temp10 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp11 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp12 = new global::Fuse.Controls.NativeViewHost();
        var temp13 = new global::Fuse.Reactive.DataBinding(temp_Latitude_inst, temp3, Fuse.Reactive.BindingMode.Default);
        var temp14 = new global::Fuse.Reactive.DataBinding(temp_Longitude_inst, temp5, Fuse.Reactive.BindingMode.Default);
        var temp15 = new global::Fuse.Reactive.DataBinding(temp1_Latitude_inst, temp7, Fuse.Reactive.BindingMode.Default);
        var temp16 = new global::Fuse.Reactive.DataBinding(temp1_Longitude_inst, temp9, Fuse.Reactive.BindingMode.Default);
        temp10.LineNumber = 3;
        temp10.FileName = "Pages/HomePage.ux";
        temp10.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/HomePage.js"));
        temp11.LineNumber = 4;
        temp11.FileName = "Pages/HomePage.ux";
        temp11.File = new global::Uno.UX.BundleFileSource(import("../../../../../Modules/Backend.js"));
        temp12.Children.Add(temp1);
        temp1.Zoom = 15;
        temp1.Children.Add(temp);
        temp1.Bindings.Add(temp15);
        temp1.Bindings.Add(temp16);
        temp.Label = "Current Location";
        temp.Bindings.Add(temp13);
        temp.Bindings.Add(temp14);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Children.Add(temp10);
        this.Children.Add(temp11);
        this.Children.Add(temp12);
    }
    static global::Uno.UX.Selector __selector0 = "Latitude";
    static global::Uno.UX.Selector __selector1 = "Longitude";
}
