package com.foreign.Fuse.GeoLocation;

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
import android.location.LocationManager;
import fuse.geolocation.UpdateListener;
import android.os.Handler;
import android.os.Looper;

public class PromiseListener
{
    static void debug_log(Object message)
    {
        android.util.Log.d("PleaseWork", (message==null ? "null" : message.toString()));
    }

    public static Object CreateListener419(final com.foreign.Uno.Action_Object onLocationChanged)
    {
        return new UpdateListener(onLocationChanged);
    }
    
    public static void StartUpdatesWithTimer420(final Object locationManager,final Object listener,final com.foreign.Uno.Action onTimeout,final int timeout)
    {
        Handler h = new Handler(Looper.getMainLooper());
        h.postDelayed(onTimeout, (long)timeout);				
        h.post(new Runnable(){
        	@Override
        	public void run() {
        		LocationManager lm = (LocationManager) locationManager; 
        		lm.requestSingleUpdate(LocationManager.NETWORK_PROVIDER, (UpdateListener)listener, null);
        		lm.requestSingleUpdate(LocationManager.GPS_PROVIDER, (UpdateListener)listener, null);
        	}
        });
    }
    
    public static void StopUpdate421(final Object locationManager,final Object listener)
    {
        Handler h = new Handler(Looper.getMainLooper());
        h.post(new Runnable() {
        	@Override 
        	public void run() {
        		((LocationManager)locationManager).removeUpdates((UpdateListener)listener);
        	} 
        });
    }
    
}
