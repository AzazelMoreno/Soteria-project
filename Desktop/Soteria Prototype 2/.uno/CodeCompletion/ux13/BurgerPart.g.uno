[Uno.Compiler.UxGenerated]
public partial class BurgerPart: Fuse.Controls.Rectangle
{
    static BurgerPart()
    {
    }
    [global::Uno.UX.UXConstructor]
    public BurgerPart()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this.CornerRadius = float4(5f, 5f, 5f, 5f);
        this.Color = Fuse.Drawing.Colors.White;
        this.StrokeColor = float4(0.6f, 0.6f, 0.6f, 1f);
        this.StrokeWidth = 2f;
        this.Width = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        this.Height = new Uno.UX.Size(5f, Uno.UX.Unit.Unspecified);
        this.Margin = float4(0f, 2f, 0f, 2f);
    }
}
