package com.example.zzp.multiprocess;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;

public class MainActivity extends AppCompatActivity {
    private static final String TAG = "MainActivity";
    Button mButton;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        MyApplication.f();
        UserManager.sUserId++;
        Log.e(TAG, "onCreate: "+UserManager.sUserId);
        mButton=findViewById(R.id.btn);
        mButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent=new Intent(MainActivity.this,SecondActivity.class);
                startActivity(intent);
                toString();
            }
        });
    }

    @Override
    protected void onResume() {
        super.onResume();
        Log.e(TAG, "onResume: ");

    }
}
