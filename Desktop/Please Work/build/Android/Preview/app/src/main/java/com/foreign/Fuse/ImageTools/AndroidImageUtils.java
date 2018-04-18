package com.foreign.Fuse.ImageTools;

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
import java.lang.Thread;
import java.lang.Runnable;
import android.util.Log;
import android.provider.MediaStore;
import com.fuse.Activity;
import com.fusetools.camera.Image;
import com.fusetools.camera.ImageUtils;
import android.content.Intent;

public class AndroidImageUtils
{
    static void debug_log(Object message)
    {
        android.util.Log.d("PleaseWork", (message==null ? "null" : message.toString()));
    }

    public static void Crop374(final String path,final int width,final int height,final int x,final int y,final com.foreign.Uno.Action_String onSuccess,final com.foreign.Uno.Action_String onFail,final boolean performInPlace)
    {
        final Image inImage = Image.fromPath(path);
        Thread t = new Thread(new Runnable() { public void run() {
        	try{
        		Image outImage = ImageUtils.crop(inImage, width, height, x, y, 100, performInPlace);
        		onSuccess.run(outImage.getFilePath());
        	}catch(Exception e){
        		onFail.run(e.getMessage());
        		e.printStackTrace();
        	}
        }});
        t.start();
    }
    
    public static void GetBase64FromImage375(final String path,final com.foreign.Uno.Action_String onSuccess,final com.foreign.Uno.Action_String onFail)
    {
        Thread t = new Thread(new Runnable() { public void run() {
        	try
        	{
        		String encoded = ImageUtils.getBase64FromImage(Image.fromPath(path));
        		onSuccess.run(encoded);
        	}catch(Exception e)
        	{
        		onFail.run(e.getMessage());
        	}
        }});
        t.start();
    }
    
    public static void GetImageFromBase64376(final String b64,final com.foreign.Uno.Action_String onSuccess,final com.foreign.Uno.Action_String onFail)
    {
        Thread t = new Thread(new Runnable() { public void run() {
        	try
        	{
        		Image outImage = Image.fromBase64(b64);
        		onSuccess.run(outImage.getFilePath());
        	}catch(Exception e)
        	{
        		onFail.run(e.getMessage());
        	}
        }});
        t.start();
    }
    
    public static void GetImageFromBuffer377(final com.uno.ByteArray bytes,final com.foreign.Uno.Action_String onSuccess,final com.foreign.Uno.Action_String onFail)
    {
        Thread t = new Thread(new Runnable() { public void run() {
        	try{
        		byte[] bitmapdata = bytes.copyArray();
        		Image outImage = Image.fromBytes(bitmapdata);
        		onSuccess.run(outImage.getFilePath());
        	}catch(Exception e){
        		onFail.run(e.getMessage());
        	}
        }});
        t.start();
    }
    
    public static String GetImageFromBufferSync378(final com.uno.ByteArray bytes)
    {
        try{
        	byte[] bitmapdata = bytes.copyArray();
        	Image outImage = Image.fromBytes(bitmapdata);
        	return outImage.getFilePath();
        }catch(Exception e){
        	e.printStackTrace();
        	return null;
        }
    }
    
    public static void GetSizeInternal379(final String path,final com.uno.IntArray values)
    {
        try{
        	Image inImage = Image.fromPath(path);
        	values.set(0, inImage.getWidth());
        	values.set(1, inImage.getHeight());
        }catch(Exception e){
        }
    }
    
    public static void Resize380(final String path,final int width,final int height,final int mode,final com.foreign.Uno.Action_String onSuccess,final com.foreign.Uno.Action_String onFail,final boolean performInPlace)
    {
        final Image inImage = Image.fromPath(path);
        Thread t = new Thread(new Runnable() { public void run() {
        		try{
        			Image outImage = ImageUtils.resize(inImage, width, height, ImageUtils.ResizeMode.values()[mode], 100, performInPlace);
        			onSuccess.run(outImage.getFilePath());
        		}catch(Exception e){
        			onFail.run(e.getMessage());
        			e.printStackTrace();
        		}
        }});
        t.start();
    }
    
}
