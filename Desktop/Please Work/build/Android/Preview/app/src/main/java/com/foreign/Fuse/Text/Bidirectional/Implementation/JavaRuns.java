package com.foreign.Fuse.Text.Bidirectional.Implementation;

// fuse defined imports
import com.uno.UnoObject;
import com.uno.BoolArray;
import com.uno.ByteArray;
import com.uno.CharArray;
import com.uno.DoubleArray;
import com.uno.FloatArray;
import com.uno.IntArray;
import com.uno.LongArray;
import com.uno.ObjectArray;
import com.uno.ShortArray;
import com.uno.StringArray;
import com.Bindings.UnoHelper;
import com.Bindings.UnoWrapped;
import com.Bindings.ExternedBlockHost;

// user defined imports
import java.text.Bidi;

public class JavaRuns
{
    static void debug_log(Object message)
    {
        android.util.Log.d("PleaseWork", (message==null ? "null" : message.toString()));
    }

    public static Object Create309(final String text)
    {
        return new Bidi(text, Bidi.DIRECTION_DEFAULT_LEFT_TO_RIGHT);
    }
    
    public static int GetBaseLevel310(final Object handle)
    {
        return ((Bidi)handle).getBaseLevel();
    }
    
    public static int GetRunCount311(final Object handle)
    {
        return ((Bidi)handle).getRunCount();
    }
    
    public static int GetRunLevel312(final Object handle,final int run)
    {
        return ((Bidi)handle).getRunLevel(run);
    }
    
    public static int GetRunLimit313(final Object handle,final int run)
    {
        return ((Bidi)handle).getRunLimit(run);
    }
    
    public static int GetRunStart314(final Object handle,final int run)
    {
        return ((Bidi)handle).getRunStart(run);
    }
    
}
