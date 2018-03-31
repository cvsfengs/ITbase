package com.example.zzp.myapplication;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;

import java.util.List;

import retrofit2.Call;
import retrofit2.Retrofit;

public class MainActivity extends AppCompatActivity {
    private static final String TAG = "MainActivity";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        f();
    }

    void f() {
        Retrofit retrofit = new Retrofit.Builder().baseUrl("https://api.github.com/")
                .baseUrl("https://api.github.com/")
                .build();
        GitHubService service = retrofit.create(GitHubService.class);

        Call<List<Repo>> repos = service.listRepos("octocat");

        Log.e(TAG, "f: "+repos.toString());

    }
}
