sealed class PleaseWork_FuseControlsMapView_Latitude_Property: Uno.UX.Property<double>
{
    [Uno.WeakReference] readonly Fuse.Controls.MapView _obj;
    public PleaseWork_FuseControlsMapView_Latitude_Property(Fuse.Controls.MapView obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override double Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.MapView)obj).Latitude; }
    public override void Set(global::Uno.UX.PropertyObject obj, double v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.MapView)obj).SetLatitude(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class PleaseWork_FuseControlsMapView_Longitude_Property: Uno.UX.Property<double>
{
    [Uno.WeakReference] readonly Fuse.Controls.MapView _obj;
    public PleaseWork_FuseControlsMapView_Longitude_Property(Fuse.Controls.MapView obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override double Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.MapView)obj).Longitude; }
    public override void Set(global::Uno.UX.PropertyObject obj, double v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.MapView)obj).SetLongitude(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class PleaseWork_FuseControlsMapMarker_Latitude_Property: Uno.UX.Property<double>
{
    [Uno.WeakReference] readonly Fuse.Controls.MapMarker _obj;
    public PleaseWork_FuseControlsMapMarker_Latitude_Property(Fuse.Controls.MapMarker obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override double Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.MapMarker)obj).Latitude; }
    public override void Set(global::Uno.UX.PropertyObject obj, double v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.MapMarker)obj).Latitude = v; }
}
sealed class PleaseWork_FuseControlsMapMarker_Longitude_Property: Uno.UX.Property<double>
{
    [Uno.WeakReference] readonly Fuse.Controls.MapMarker _obj;
    public PleaseWork_FuseControlsMapMarker_Longitude_Property(Fuse.Controls.MapMarker obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override double Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.MapMarker)obj).Longitude; }
    public override void Set(global::Uno.UX.PropertyObject obj, double v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.MapMarker)obj).Longitude = v; }
}
