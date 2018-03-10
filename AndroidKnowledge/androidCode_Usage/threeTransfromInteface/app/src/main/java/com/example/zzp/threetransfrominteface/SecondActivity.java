package com.example.zzp.threetransfrominteface;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.util.Log;

/**
 * Created by zzp on 18-3-9.
 */

public class SecondActivity extends Activity {

    private static final String TAG = "SecondActivity";
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        UserParcelable userParcelable = (UserParcelable) getIntent().getParcelableExtra("person_data");
        Log.e(TAG, "onCreate: "+userParcelable.hashCode());
    }

}
