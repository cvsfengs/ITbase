package com.example.zzp.myapplication.model;

import com.example.zzp.myapplication.presenter.OnLoginFinishedListener;

public interface LoginModel {
    //模型层用到present层的的东西
    void login(User user, OnLoginFinishedListener listener);
}
