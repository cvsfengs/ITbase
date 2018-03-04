package com.example.zzp.myapplication;

import android.annotation.SuppressLint;
import android.app.Activity;
import android.os.Handler;
import android.os.Message;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.Button;
import android.widget.TextView;

import java.lang.ref.WeakReference;

public class MainActivity extends AppCompatActivity {
    TextView mTextView;
    Button mButton;
    StaticHandler mStaticHandler;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        mTextView=findViewById(R.id.tv_main_helloworld);



        useHandler();

    }


    @Override
    protected void onResume() {
        super.onResume();
        useHandler();
        updateWeather()
    }

    //方法一：用Handler
    //handler后台执行任务导致activity不使用时候不能及时GC
    //解决方案:改为静态类,使用弱引用
    void useHandler(){
        new StaticHandler(this).u=p .sendEmptyMessageDelayed(0,  1000);
    }


    static class StaticHandler extends Handler {
        WeakReference<MainActivity> mActivityWeakReference;

         StaticHandler(MainActivity activity) {
            super();
            mActivityWeakReference=new WeakReference<MainActivity>(activity);
        }

        @Override
        public void handleMessage(Message msg) {
            MainActivity activity=mActivityWeakReference.get();

            switch (msg.what) {
                case 0:
                    //完成主界面更新,拿到数据
                    String data = (String)msg.obj;
                    activity.mTextView.setText("使用静态内部类+弱引用");
                    break;
                default:
                    break;
            }
        }


        private void updateWeather(final StaticHandler mStaticHandler) {
            new Thread(new Runnable(){

                @Override
                public void run() {
                    //耗时操作，完成之后发送消息给Handler，完成UI更新；
                    mStaticHandler.sendEmptyMessage(0);

                    //需要数据传递，用下面方法；
                    Message msg =new Message();
                    msg.obj = "数据";//可以是基本类型，可以是对象，可以是List、map等；
                    mStaticHandler.sendMessage(msg);
                }

            }).start();

        }
    }


    @Override
    protected void onDestroy() {
        super.onDestroy();
        //移除消息队列
        mStaticHandler.removeCallbacks(null);
    }
}
