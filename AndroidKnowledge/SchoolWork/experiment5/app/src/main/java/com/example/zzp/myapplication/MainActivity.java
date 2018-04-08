package com.example.zzp.myapplication;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

public class MainActivity extends Activity {
    private static final String TAG = "MainActivity";
    static final int REQUEST_CODE = 1;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        Button loginBtn=findViewById(R.id.btn_login);
        TextView userTv=findViewById(R.id.tv_username);
        TextView userPwd=findViewById(R.id.tv_userpwd);
        loginBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent subActivityIntent=new Intent(MainActivity.this,SubActivity.class);
                startActivityForResult(subActivityIntent,REQUEST_CODE);
            }
        });
    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        super.onActivityResult(requestCode, resultCode, data);
        switch (requestCode){
            case 1:
                Log.e(TAG, "onActivityResult:1");
                String s= data.getStringExtra("name");
                data.getStringExtra("passwd");
                Log.e(TAG, "onActivityResult: "+s);
            case 2:
                Log.e(TAG, "onActivityResult: 2");
        }
    }
}
