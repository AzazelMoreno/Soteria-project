package com.foreign.Uno.Permissions;

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

public class Permissions
{
    static void debug_log(Object message)
    {
        android.util.Log.d("PleaseWork", (message==null ? "null" : message.toString()));
    }

    public static void permissionRequestFailed(final UnoObject x)
    {
        ExternedBlockHost.callUno_Uno_Permissions_Permissions_Failed59((UnoObject)x);
    }
    
    public static void permissionRequestSucceeded(final UnoObject x)
    {
        ExternedBlockHost.callUno_Uno_Permissions_Permissions_Succeeded60((UnoObject)x);
    }
    
    public static void requestPermission61(final UnoObject promise,final String permissionName)
    {
        com.fuse.Permissions.startPermissionRequest((UnoObject)promise, permissionName);
    }
    
    public static void requestPermissions62(final UnoObject promise,final com.uno.StringArray permissionNames)
    {
        com.fuse.Permissions.startPermissionRequest((UnoObject)promise, permissionNames.copyArray());
    }
    
    public static boolean shouldShowInformation63(final String x)
    {
        return com.fuse.Permissions.shouldShowInformation(x);
    }
    
}
