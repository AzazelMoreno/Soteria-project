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
        var temp = new global::Fuse.Controls.MapMarker();
        temp_Latitude_inst = new PleaseWork_FuseControlsMapMarker_Latitude_Property(temp, __selector0);
        var temp2 = new global::Fuse.Reactive.Data("lat");
        temp_Longitude_inst = new PleaseWork_FuseControlsMapMarker_Longitude_Property(temp, __selector1);
        var temp3 = new global::Fuse.Reactive.Data("long");
        var temp1 = new global::Fuse.Controls.MapView();
        temp1_Latitude_inst = new PleaseWork_FuseControlsMapView_Latitude_Property(temp1, __selector0);
        var temp4 = new global::Fuse.Reactive.Data("lat");
        temp1_Longitude_inst = new PleaseWork_FuseControlsMapView_Longitude_Property(temp1, __selector1);
        var temp5 = new global::Fuse.Reactive.Data("long");
        var temp6 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp7 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp8 = new global::Fuse.Controls.NativeViewHost();
        var temp9 = new global::Fuse.Reactive.DataBinding(temp_Latitude_inst, temp2, Fuse.Reactive.BindingMode.Default);
        var temp10 = new global::Fuse.Reactive.DataBinding(temp_Longitude_inst, temp3, Fuse.Reactive.BindingMode.Default);
        var temp11 = new global::Fuse.Reactive.DataBinding(temp1_Latitude_inst, temp4, Fuse.Reactive.BindingMode.Default);
        var temp12 = new global::Fuse.Reactive.DataBinding(temp1_Longitude_inst, temp5, Fuse.Reactive.BindingMode.Default);
        temp6.LineNumber = 3;
        temp6.FileName = "Pages/HomePage.ux";
        temp6.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/HomePage.js"));
        temp7.LineNumber = 4;
        temp7.FileName = "Pages/HomePage.ux";
        temp7.File = new global::Uno.UX.BundleFileSource(import("../../../../../Modules/Backend.js"));
        temp8.Children.Add(temp1);
        temp1.Zoom = 10;
        temp1.Children.Add(temp);
        temp1.Bindings.Add(temp11);
        temp1.Bindings.Add(temp12);
        temp.Label = "Fuse Place";
        temp.Bindings.Add(temp9);
        temp.Bindings.Add(temp10);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Children.Add(temp6);
        this.Children.Add(temp7);
        this.Children.Add(temp8);
    }
    static global::Uno.UX.Selector __selector0 = "Latitude";
    static global::Uno.UX.Selector __selector1 = "Longitude";
}
