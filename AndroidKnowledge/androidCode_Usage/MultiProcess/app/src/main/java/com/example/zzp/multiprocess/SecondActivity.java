package com.example.zzp.multiprocess;

import android.content.Intent;
import android.os.Bundle;
import android.support.annotation.Nullable;
import android.support.v7.app.AppCompatActivity;
import android.util.Log;
import android.view.View;
import android.widget.Button;

/**
 * Created by zzp on 18-3-9.
 */

public class SecondActivity extends AppCompatActivity {
    private static final String TAG = "SecondActivity";
    Button mButton;

    @Override
    protected void onCreate(@Nullable Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        Log.e(TAG, "onCreate: "+UserManager.sUserId);
        Log.e(TAG, "onCreate: "+UserManager.sUserId);
        MyApplication.f();

        setContentView(R.layout.activity_second);
        mButton=findViewById(R.id.btn2);
        mButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent=new Intent(SecondActivity.this,ThirdActivity.class);
                startActivity(intent);
            }
        });

    }

    @Override
    protected void onResume() {
        super.onResume();
        Log.e(TAG, "onResume: ");

    }

    @Override
    protected void onUserLeaveHint() {
        super.onUserLeaveHint();
    }
}
