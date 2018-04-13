package com.example.zzp.myapplication.presenter;

import com.example.zzp.myapplication.model.User;

public interface LoginPresenter {
    void validateCredentials(User user);
    void onDestroy();
}
