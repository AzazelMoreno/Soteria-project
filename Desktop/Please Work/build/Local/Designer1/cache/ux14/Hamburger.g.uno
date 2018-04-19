[Uno.Compiler.UxGenerated]
public partial class Hamburger: Fuse.Controls.Page
{
    static Hamburger()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Hamburger()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Controls.Circle();
        var temp1 = new global::Fuse.Controls.Grid();
        var temp2 = new global::Fuse.Controls.Rectangle();
        var temp3 = new global::Fuse.Controls.Rectangle();
        var temp4 = new global::Fuse.Controls.Rectangle();
        temp.Color = float4(0.6784314f, 0.8470588f, 0.9019608f, 1f);
        temp.Width = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp.Alignment = Fuse.Elements.Alignment.TopRight;
        temp.Margin = float4(5f, 5f, 5f, 5f);
        temp.Children.Add(temp1);
        temp1.RowCount = 3;
        temp1.Children.Add(temp2);
        temp1.Children.Add(temp3);
        temp1.Children.Add(temp4);
        temp2.CornerRadius = float4(5f, 5f, 5f, 5f);
        temp2.Color = Fuse.Drawing.Colors.White;
        temp2.Width = new Uno.UX.Size(25f, Uno.UX.Unit.Unspecified);
        temp2.Height = new Uno.UX.Size(2f, Uno.UX.Unit.Unspecified);
        temp3.Color = Fuse.Drawing.Colors.White;
        temp3.Width = new Uno.UX.Size(25f, Uno.UX.Unit.Unspecified);
        temp3.Height = new Uno.UX.Size(2f, Uno.UX.Unit.Unspecified);
        temp4.Color = Fuse.Drawing.Colors.White;
        temp4.Width = new Uno.UX.Size(25f, Uno.UX.Unit.Unspecified);
        temp4.Height = new Uno.UX.Size(2f, Uno.UX.Unit.Unspecified);
        this.Children.Add(temp);
    }
}
