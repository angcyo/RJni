package com.jni;

/**
 * Created by angcyo on 2016-06-05 00:03.
 */
public class NdkHello {

    static {
        System.loadLibrary("HelloJni");
    }

    //返回字符串
    public static native String getHello();
}
