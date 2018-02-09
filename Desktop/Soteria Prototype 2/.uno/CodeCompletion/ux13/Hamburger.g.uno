[Uno.Compiler.UxGenerated]
public partial class Hamburger: Fuse.Controls.Panel
{
    global::Uno.UX.Property<Uno.UX.Size> rect2_Width_inst;
    internal global::BurgerPart rect1;
    internal global::BurgerPart rect2;
    internal global::BurgerPart rect3;
    internal global::Fuse.Triggers.WhileTrue clickedState;
    internal global::Fuse.Controls.Panel sidebar;
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
        rect2 = new global::BurgerPart();
        rect2_Width_inst = new SoteriaPrototype2_FuseElementsElement_Width_Property(rect2, __selector0);
        var temp = new global::Fuse.Controls.Grid();
        rect1 = new global::BurgerPart();
        rect3 = new global::BurgerPart();
        var temp1 = new global::Fuse.Gestures.Clicked();
        var temp2 = new global::Fuse.Animations.Scale();
        var temp3 = new global::Fuse.Animations.Keyframe();
        var temp4 = new global::Fuse.Animations.Keyframe();
        var temp5 = new global::Fuse.Triggers.Actions.Toggle();
        clickedState = new global::Fuse.Triggers.WhileTrue();
        var temp6 = new global::Fuse.Animations.Change<Uno.UX.Size>(rect2_Width_inst);
        var temp7 = new global::Fuse.Animations.Move();
        var temp8 = new global::Fuse.Animations.Move();
        var temp9 = new global::Fuse.Animations.Rotate();
        var temp10 = new global::Fuse.Animations.Rotate();
        sidebar = new global::Fuse.Controls.Panel();
        var temp11 = new global::Fuse.Controls.Rectangle();
        this.HitTestMode = Fuse.Elements.HitTestMode.LocalBoundsAndChildren;
        this.Width = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        this.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp.RowCount = 3;
        temp.Children.Add(rect1);
        temp.Children.Add(rect2);
        temp.Children.Add(rect3);
        rect1.Name = __selector1;
        rect2.Name = __selector2;
        rect3.Name = __selector3;
        temp1.Animators.Add(temp2);
        temp1.Actions.Add(temp5);
        temp2.Keyframes.Add(temp3);
        temp2.Keyframes.Add(temp4);
        temp3.Value = float4(0.8f, 0.8f, 0.8f, 0.8f);
        temp3.Time = 0.05;
        temp4.Value = float4(1f, 1f, 1f, 1f);
        temp4.Time = 0.1;
        temp5.Delay = 0.1f;
        temp5.Target = clickedState;
        clickedState.Name = __selector4;
        clickedState.Animators.Add(temp6);
        clickedState.Animators.Add(temp7);
        clickedState.Animators.Add(temp8);
        clickedState.Animators.Add(temp9);
        clickedState.Animators.Add(temp10);
        clickedState.Nodes.Add(sidebar);
        temp6.Value = new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified);
        temp6.Duration = 0.4;
        temp6.DelayBack = 0.1;
        temp6.Easing = Fuse.Animations.Easing.BounceOut;
        temp6.EasingBack = Fuse.Animations.Easing.BounceIn;
        temp7.Y = 1.5f;
        temp7.Duration = 0.2;
        temp7.Delay = 0.3;
        temp7.RelativeTo = Fuse.TranslationModes.Size;
        temp7.Target = rect1;
        temp7.Easing = Fuse.Animations.Easing.QuadraticInOut;
        temp8.Y = -3.75f;
        temp8.Duration = 0.2;
        temp8.Delay = 0.3;
        temp8.RelativeTo = Fuse.TranslationModes.Size;
        temp8.Target = rect3;
        temp8.Easing = Fuse.Animations.Easing.QuadraticInOut;
        temp9.Degrees = 55f;
        temp9.Duration = 0.2;
        temp9.DelayBack = 0;
        temp9.Delay = 0.4;
        temp9.Target = rect1;
        temp9.Easing = Fuse.Animations.Easing.QuadraticInOut;
        temp10.Degrees = -55f;
        temp10.Duration = 0.2;
        temp10.DelayBack = 0;
        temp10.Delay = 0.4;
        temp10.Target = rect3;
        temp10.Easing = Fuse.Animations.Easing.QuadraticInOut;
        sidebar.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        sidebar.Margin = float4(56f, 0f, 0f, 0f);
        sidebar.Name = __selector5;
        global::Fuse.Navigation.EdgeNavigation.SetEdge(sidebar, Fuse.Navigation.NavigationEdge.Right);
        sidebar.Background = Fuse.Drawing.Brushes.White;
        sidebar.Children.Add(temp11);
        temp11.Color = Fuse.Drawing.Colors.Black;
        temp11.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp11.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        this.Children.Add(temp);
        this.Children.Add(temp1);
        this.Children.Add(clickedState);
    }
    static global::Uno.UX.Selector __selector0 = "Width";
    static global::Uno.UX.Selector __selector1 = "rect1";
    static global::Uno.UX.Selector __selector2 = "rect2";
    static global::Uno.UX.Selector __selector3 = "rect3";
    static global::Uno.UX.Selector __selector4 = "clickedState";
    static global::Uno.UX.Selector __selector5 = "sidebar";
}
