package com.example.zzp.myapplication;

import java.util.List;

import retrofit2.Call;
import retrofit2.http.GET;
import retrofit2.http.Path;

/**
 * Created by zzp on 18-3-27.
 */

public interface GitHubService {
    //Repo列表为接口返回值
    //Path把请求参数添加到请求路径GET中
    @GET("users/{user}/repo")
    Call<List<Repo>> listRepos(@Path("user") String user);
}
