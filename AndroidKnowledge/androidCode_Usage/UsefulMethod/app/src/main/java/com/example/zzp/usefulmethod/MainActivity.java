package com.example.zzp.usefulmethod;

import android.app.Activity;
import android.app.Application;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.media.ThumbnailUtils;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.text.TextUtils;
import android.text.method.HideReturnsTransformationMethod;
import android.text.method.PasswordTransformationMethod;
import android.util.Log;
import android.view.View;
import android.widget.TextView;

import java.text.DecimalFormat;

import static android.provider.MediaStore.Images.Thumbnails.MINI_KIND;

public class MainActivity extends AppCompatActivity implements Application.ActivityLifecycleCallbacks {
    private static final String TAG = "MainActivity";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }

    @Override
    protected void onResume() {
        super.onResume();

        //视频图片压缩
        ThumbnailUtils.createVideoThumbnail("", MINI_KIND);

        //判断字符串是否为空
        String str = "";
        TextUtils.isEmpty(str);

        //TextView追加文本
        TextView textView = findViewById(R.id.tv);
        textView.append("textview追加文本");

        //隐藏输入的密码
        textView.setTransformationMethod(PasswordTransformationMethod.getInstance());
        //判断操作后允许显示密码
        textView.setTransformationMethod(HideReturnsTransformationMethod.getInstance());

        //监听文本输入框内容的改变

        //View. 不用用户点击，直接触发View的点击事件，callOnClick是后者的简化版，不包含辅助功能，不包含声音等
        //辅助功能：触觉反馈手势导航轨迹球等
         View view = findViewById(R.id.view);

        view.callOnClick();
        view.performClick();
        view.performLongClick();

        //获取View在窗口、屏幕中的位置
        int[] windowsLocate = new int[2];
        view.getLocationInWindow(windowsLocate);
        int[] screenLocate = new int[2];
        view.getLocationOnScreen(screenLocate);

        //截图
        view.getDrawingCache();

        //指定位数，百分数。科学计数
        DecimalFormat.getPercentInstance();

        Context context1=this;
        Context context2=getBaseContext();
        Context context3;
        //CONTEXT_IGNORE_SECURITY 忽略安全警告
        try {
            context3= this.createPackageContext("gg",CONTEXT_IGNORE_SECURITY);
            if (context3!=null && context3==context1){
                Log.e(TAG, "context_a: "+true );
            }else if (context3==null){
                Log.e(TAG, "context3: null" );
            }else {
                Log.e(TAG, "context_a: "+false );
            }

        } catch (PackageManager.NameNotFoundException e) {
            e.printStackTrace();
        }

        if (context1==context2){
            Log.e(TAG, "context_b: "+true );
        }else{
            Log.e(TAG, "context_b: "+false );
        }




        Log.e(TAG, "onResume: ");
    }

    @Override
    protected void onUserLeaveHint() {
        super.onUserLeaveHint();
        Log.e(TAG, "onUserLeaveHint: " );
    }

    //当调用本方法时，用户可以与本activity进行交互
    @Override
    public void onWindowFocusChanged(boolean hasFocus) {
        super.onWindowFocusChanged(hasFocus);
    }

    //不在栈中：onCreate->onStart->onResume->onPause->onStop->onDestroy
    //在栈中而不再栈顶：onNewIntent->onRestart->onStart->onResume->onPause->onStop->onDestroy
    //在栈顶：onNewIntent->onResume->onPause->onStop->onDestroy
    @Override
    protected void onNewIntent(Intent intent) {
        super.onNewIntent(intent);
    }

    //huo


    @Override
    public Context createPackageContext(String packageName, int flags) throws PackageManager.NameNotFoundException {
        Log.e(TAG, "createPackageContext: "+packageName+"  flags"+flags );
        return super.createPackageContext(packageName, flags);
    }

    //检测生命周期的改变
    @Override
    public void onActivityCreated(Activity activity, Bundle savedInstanceState) {
        Log.e(TAG, "onActivityCreated: ");
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
}
