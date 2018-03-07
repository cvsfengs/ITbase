package com.example.zzp.myapplication;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
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
        mTextView = findViewById(R.id.tv_main_helloworld);
        mButton=findViewById(R.id.btn);
        mButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                subThreadChangeUi();
            }
        });
        
        useHandler();
        useRunOnUIThread();
        useViewPost();


    }



    @Override
    protected void onResume() {
        super.onResume();
    }


    //方法一：用Handler
    //handler后台执行任务导致activity不使用时候不能及时GC
    //解决方案:改为静态类,使用弱引用
   void useHandler() {
        mStaticHandler = new StaticHandler(this);
        mStaticHandler.updateWeather(mStaticHandler);
    }


   static class StaticHandler extends Handler {
        WeakReference<MainActivity> mActivityWeakReference;

        StaticHandler(MainActivity activity) {
            super();
            mActivityWeakReference = new WeakReference<MainActivity>(activity);
        }

        @Override
        public void handleMessage(Message msg) {
            MainActivity activity = mActivityWeakReference.get();

            switch (msg.what) {
                case 0:
                    //完成主界面更新,拿到数据
                    String data = (String) msg.obj;
                    activity.mTextView.setText("使用静态内部类+弱引用");
                    break;
                default:
                    break;
            }
        }


       private void updateWeather(final StaticHandler mStaticHandler) {
            new Thread(new Runnable() {

                @Override
                public void run() {
                    //耗时操作，完成之后发送消息给Handler，完成UI更新；
                    mStaticHandler.sendEmptyMessageDelayed(0, 2000);


                    //需要数据传递，用下面方法；
                    Message msg = new Message();
                    msg.obj = "数据";//可以是基本类型，可以是对象，可以是List、map等；
                    mStaticHandler.sendMessage(msg);



                }

            }).start();

        }
    }

   void useRunOnUIThread(){
        new Thread() {
            public void run() {
                //这儿是耗时操作，完成之后更新UI；
                runOnUiThread(new Runnable(){

                    @Override
                    public void run() {

                        //更新UI
                        mTextView.setText(R.string.use_runonuithread);
                    }

                });
            }
        }.start();
    }

    private void useViewPost() {
        mTextView.post(new Runnable() {
            @Override
            public void run() {
                mTextView.setText(R.string.view_post);
            }
        });
    }


    @Override
    protected void onDestroy() {
        super.onDestroy();
        //移除消息队列
        mStaticHandler.removeCallbacks(null);
    }

    void subThreadChangeUi(){
       Log.e("sss",Thread.currentThread().getId()+ " ");
        new Thread(new Runnable() {
            @Override
            public void run() {
                Handler handler1=  new Handler(Looper.getMainLooper()){
                    @Override
                    public void handleMessage(Message msg) {
                        super.handleMessage(msg);
                        mTextView.setText("GGGG");
                    }
                };
                handler1.sendEmptyMessage(1);
                Log.e("sss",Thread.currentThread().getId()+ " ");
            }
        }).start();
    }

//子线程Looper
//    HandlerThread


}
