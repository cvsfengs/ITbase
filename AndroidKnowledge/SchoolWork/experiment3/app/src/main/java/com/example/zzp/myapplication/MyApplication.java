package com.example.zzp.myapplication;

import android.app.Activity;
import android.app.Application;
import android.os.Bundle;
import android.util.Log;

public class MyApplication extends Application {
    private static final String TAG = "MyApplication";
    //声明一个监听Activity们生命周期的接口;application下的每个Activity声明周期改变时，都会触发以下的函数。
    private ActivityLifecycleCallbacks mActivityLifecycleCallbacks=new ActivityLifecycleCallbacks() {
        @Override
        public void onActivityCreated(Activity activity, Bundle savedInstanceState) {
            if (activity.getClass() == MainActivity.class){
                Log.e(TAG, "MainActivityCreated.");
            }
        }

        @Override
        public void onActivityStarted(Activity activity) {
            Log.e(TAG, "onActivityStarted: ");
        }

        @Override
        public void onActivityResumed(Activity activity) {
            Log.e(TAG, "onActivityResumed: ");
        }

        @Override
        public void onActivityPaused(Activity activity) {
            Log.e(TAG, "onActivityPaused: ");
        }

        @Override
        public void onActivityStopped(Activity activity) {
            Log.e(TAG, "onActivityStopped: ");
        }

        @Override
        public void onActivitySaveInstanceState(Activity activity, Bundle outState) {
            Log.e(TAG, "onActivitySaveInstanceState: ");
        }

        @Override
        public void onActivityDestroyed(Activity activity) {
            Log.e(TAG, "onActivityDestroyed: ");
        }


    };

    @Override
    public void onCreate() {
        super.onCreate();
        Log.e(TAG, "onCreate: ");
        registerActivityLifecycleCallbacks(mActivityLifecycleCallbacks);
    }

    @Override
    public void onTerminate() {
        super.onTerminate();
        Log.e(TAG, "onTerminate: ");
        unregisterActivityLifecycleCallbacks(mActivityLifecycleCallbacks);

    }
}
