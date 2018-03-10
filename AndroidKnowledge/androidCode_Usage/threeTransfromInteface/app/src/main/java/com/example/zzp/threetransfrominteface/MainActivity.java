package com.example.zzp.threetransfrominteface;


import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.util.Log;

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;

public class MainActivity extends Activity {

    private static final String TAG = "MainActivity";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        useSerializable();
        useParcelable();
    }


    void useSerializable(){
        new Thread(new Runnable() {
            @Override
            public void run() {
                //序列化过程
                UserSerializable userSerializable = new UserSerializable(0,"jake",true);
                ObjectOutputStream out = null;
                try {
                    out = new ObjectOutputStream(
                            new FileOutputStream("cache.txt"));
                    out.writeObject(userSerializable);
                    out.close();
                } catch (IOException e) {
                    e.printStackTrace();
                }

                //反序列化过程
                ObjectInputStream in = null;
                try {
                    in = new ObjectInputStream(
                            new FileInputStream("cache.txt"));
                    UserSerializable newUserSerializable = (UserSerializable) in.readObject();
                    in.close();
                } catch (IOException | ClassNotFoundException e) {
                    e.printStackTrace();
                }

            }
        });
    }

    void useParcelable(){

        UserParcelable userParcelable=new UserParcelable(2,"name",false);
        Log.e(TAG, "onCreate: "+userParcelable.hashCode());
        Intent intent = new Intent(MainActivity.this,SecondActivity.class);
        intent.putExtra("person_data",userParcelable);
        startActivity(intent);
//        UserParcelable person = (UserParcelable) getIntent().getParcelableExtra("person_data");
    }
}
