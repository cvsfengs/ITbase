package com.example.zzp.multiprocess;

import android.os.Bundle;
import android.support.annotation.Nullable;
import android.support.v7.app.AppCompatActivity;

/**
 * Created by zzp on 18-3-9.
 */

public class ThirdActivity extends AppCompatActivity {


    @Override
    protected void onCreate(@Nullable Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        int []abc=new int[2];
        abc.toString();
        MyApplication.f();
    }
}
