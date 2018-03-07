package com.example.zzp.servicetest;

import android.app.Notification;
import android.app.PendingIntent;
import android.app.Service;
import android.content.Intent;
import android.os.Binder;
import android.os.IBinder;
import android.util.Log;

/**
 * Created by zzp on 18-3-6.
 */

public class MyService extends Service {

    public static final String TAG = "MyService";

    private MyBinder mBinder = new MyBinder();
    @Override
    public void onCreate() {
        super.onCreate();
        Log.e(TAG, "onCreate() executed");


        //前台广播

        Intent notificationIntent = new Intent(this, MainActivity.class);
        PendingIntent pendingIntent = PendingIntent.getActivity(this, 0,
                notificationIntent, 0);

        Notification notification=new Notification.Builder(this)
                .setSmallIcon(R.drawable.ic_launcher_foreground)
                .setTicker("有通知到来")
                .setWhen(System.currentTimeMillis())
                .setContentTitle("这是通知的标题")
                .setContentText("这是通知的内容")
                .setContentIntent(pendingIntent)
                .build();

        startForeground(1, notification);
    }

    @Override
    public int onStartCommand(Intent intent, int flags, int startId) {
        new Thread(new Runnable() {
            @Override
            public void run() {
                // 开始执行后台任务
                Log.e(TAG, "run: onstartcommand" );
            }
        }).start();
        return super.onStartCommand(intent, flags, startId);
    }


    @Override
    public void onDestroy() {
        super.onDestroy();
        Log.e(TAG, "onDestroy() executed");
    }

    @Override
    public IBinder onBind(Intent intent) {

        return mBinder;
    }

    class MyBinder extends Binder {

        public void startDownload() {
            new Thread(new Runnable() {
                @Override
                public void run() {
                    // 执行具体的下载任务
                    Log.e(TAG, "run: in binder" );
                }
            }).start();
        }

    }
}
