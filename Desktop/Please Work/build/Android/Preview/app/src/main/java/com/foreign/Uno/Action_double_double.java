package com.foreign.Uno;
import com.Bindings.*;
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
import com.uno.UnoObject;

public class Action_double_double extends com.uno.UnoObject
{
    public Action_double_double(long ptr) { super(ptr); }
    public void run(final double arg1, final double arg2) {
        ExternedBlockHost.callUno_Action_double_double(this,arg1,arg2);
    }
}
