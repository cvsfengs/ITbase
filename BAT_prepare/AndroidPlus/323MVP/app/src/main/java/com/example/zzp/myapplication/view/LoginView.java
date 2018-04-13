package com.example.zzp.myapplication.view;

public interface LoginView {
    void showProgress();
    void hideProgress();
    void setUsernameError();
    void setPasswordError();
    void showSuccess();
}
