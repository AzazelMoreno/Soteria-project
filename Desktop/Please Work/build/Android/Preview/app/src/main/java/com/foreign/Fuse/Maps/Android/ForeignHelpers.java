package com.foreign.Fuse.Maps.Android;

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
import com.fusetools.maps.FuseMap;
import android.util.Log;

public class ForeignHelpers
{
    static void debug_log(Object message)
    {
        android.util.Log.d("PleaseWork", (message==null ? "null" : message.toString()));
    }

    public static String AddMarker381(final Object handle,final double lat,final double lng,final String label,final String iconPath,final float iconAnchorX,final float iconAnchorY,final int uid)
    {
        FuseMap map = (FuseMap)handle;
        return map.addMarker(lat, lng, label, iconPath, iconAnchorX, iconAnchorY, uid);
    }
    
    public static void Clear382(final Object handle)
    {
        FuseMap map = (FuseMap)handle;
        map.clear();
    }
    
    public static void Configure383(final Object handle)
    {
        FuseMap map = (FuseMap)handle;
        map.onCreate(null);
        map.onResume();
    }
    
    public static void ConfigureGestures384(final Object handle,final boolean zoom,final boolean rotate,final boolean tilt,final boolean scroll)
    {
        FuseMap map = (FuseMap)handle;
        map.configureGestures(zoom,rotate,tilt, scroll);
    }
    
    public static void ConfigureUI385(final Object handle,final boolean compass,final boolean myLocationButton)
    {
        FuseMap map = (FuseMap)handle;
        map.configureUI(compass, myLocationButton);
    }
    
    public static Object CreateMap386()
    {
        return new FuseMap();
    }
    
    public static void Destroy387(final Object handle)
    {
        FuseMap map = (FuseMap)handle;
        map.dispose();
    }
    
    public static float GetOrientation388(final Object handle)
    {
        FuseMap map = (FuseMap)handle;
        return map.getOrientation();
    }
    
    public static double GetPositionLat389(final Object handle)
    {
        FuseMap map = (FuseMap)handle;
        return map.getPositionLat();
    }
    
    public static double GetPositionLong390(final Object handle)
    {
        FuseMap map = (FuseMap)handle;
        return map.getPositionLong();
    }
    
    public static float GetTilt391(final Object handle)
    {
        FuseMap map = (FuseMap)handle;
        return map.getTilt();
    }
    
    public static float GetZoom392(final Object handle)
    {
        FuseMap map = (FuseMap)handle;
        return map.getZoom();
    }
    
    public static void MoveCamera393(final Object handle,final double lat,final double lng,final float zoom,final float tilt,final float bearing,final double duration)
    {
        FuseMap map = (FuseMap)handle;
        map.moveCamera(lat,lng,zoom,tilt,bearing,duration);
    }
    
    public static void SetHybridStyle394(final Object handle)
    {
        FuseMap map = (FuseMap)handle;
        map.setHybridStyle();
    }
    
    public static void SetMapEventHandlers395(final Object handle,final com.foreign.Uno.Action onMapReady,final com.foreign.Uno.Action_double_double handleLocationLongPress,final com.foreign.Uno.Action_double_double handleLocationTapped,final com.foreign.Uno.Action onAnimationBegin,final com.foreign.Uno.Action onAnimationEnd,final com.foreign.Uno.Action_double_double handleCameraChange,final com.foreign.Uno.Action_int_String handleMarkerPressed,final com.foreign.Uno.Action_int_float_float handleTouchEvent)
    {
        final FuseMap map = (FuseMap)handle;
        map.SetCallback(new FuseMap.FuseMapCallback() {
        	@Override
        	public void onReady() {
        		onMapReady.run();
        	}
        	@Override
        	public void onLongPress(double lat, double lng) {
        		handleLocationLongPress.run(lat, lng);
        	}
        	@Override
        	public void onPress(double lat, double lng) {
        		handleLocationTapped.run(lat,lng);
        	}
        	@Override
        	public void onAnimationStart() {
        		onAnimationBegin.run();
        	}
        	@Override
        	public void onAnimationStop() {
        		onAnimationEnd.run();
        	}
        	@Override
        	public void onCameraChange(double latitude, double longitude, double zoom, double tilt, double bearing) {
        		handleCameraChange.run(latitude, longitude);
        	}
        	@Override
        	public boolean onMarkerPress(com.google.android.gms.maps.model.Marker m) {
        		handleMarkerPressed.run(map.getIdforMarker(m), m.getTitle());
        		return false;
        	}
        	@Override
        	public boolean onTouchEvent(int action, float x, float y) {
        		handleTouchEvent.run(action, x, y);
        		return false;
        	}
        });
    }
    
    public static void SetMyLocationEnabled396(final Object handle,final boolean b)
    {
        FuseMap map = (FuseMap)handle;
        map.setMyLocationEnabled(b);
    }
    
    public static void SetNormalStyle397(final Object handle)
    {
        FuseMap map = (FuseMap)handle;
        map.setNormalStyle();
    }
    
    public static void SetOrientation398(final Object handle,final float degrees,final double duration)
    {
        FuseMap map = (FuseMap)handle;
        map.setOrientation(degrees, duration);
    }
    
    public static void SetPosition399(final Object handle,final double lat,final double lng,final double duration)
    {
        FuseMap map = (FuseMap)handle;
        map.setPosition(lat,lng,duration);
    }
    
    public static void SetSatelliteStyle400(final Object handle)
    {
        FuseMap map = (FuseMap)handle;
        map.setSatelliteStyle();
    }
    
    public static void SetTilt401(final Object handle,final float tilt,final double duration)
    {
        FuseMap map = (FuseMap)handle;
        map.setTilt(tilt, duration);
    }
    
    public static void SetZoom402(final Object handle,final float zoom,final double duration)
    {
        FuseMap map = (FuseMap)handle;
        map.setZoom(zoom, duration);
    }
    
}
