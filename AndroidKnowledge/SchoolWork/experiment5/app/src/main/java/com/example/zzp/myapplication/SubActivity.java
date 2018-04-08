package com.example.zzp.myapplication;

import android.app.Activity;

import android.content.Intent;
import android.os.Bundle;

import android.util.Log;
import android.view.View;

import android.widget.AutoCompleteTextView;
import android.widget.Button;
import android.widget.EditText;


/**
 * A login screen that offers login via email/password.
 */
public class SubActivity extends Activity {

    /**
     * Id to identity READ_CONTACTS permission request.
     */
    private static final int REQUEST_READ_CONTACTS = 1;
    private static final String TAG = "SubActivity";

    // UI references.
    private EditText mUsernameView;
    private EditText mPasswordView;
    private View mLoginFormView;
    private View mFinishView;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);


        setContentView(R.layout.activity_sub);
        // Set up the login form.
        mUsernameView = findViewById(R.id.username);
        mPasswordView =  findViewById(R.id.password);
        mLoginFormView = findViewById(R.id.login_form);
        mFinishView  =findViewById(R.id.finishbtn);

        mFinishView.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent();
                Log.e(TAG, "onClick: ");
                intent.putExtra("name", mUsernameView.getText());
                intent.putExtra("passwd", mPasswordView.getText());
                Log.e(TAG, "onClick: usertext "+mUsernameView.getText());
                //设置返回数据
                SubActivity.this.setResult(RESULT_OK, intent);//RESULT_OK为自定义常量
                finish();
                }
        });
    }



    @Override
    public void onBackPressed() {
        super.onBackPressed();

    }
}

