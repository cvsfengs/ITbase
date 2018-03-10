package com.example.zzp.multiprocess;

import android.app.Application;
import android.util.Log;

/**
 * Created by zzp on 18-3-9.
 */

public class MyApplication extends Application {
    private static final String TAG = "MyApplication";

    @Override
    public void onCreate() {
        super.onCreate();

        Log.e(TAG, "application  start,process  name:" );
    }
    static public void f(){

        Log.e(TAG, "f: "+Thread.currentThread().getId());
    }
}
