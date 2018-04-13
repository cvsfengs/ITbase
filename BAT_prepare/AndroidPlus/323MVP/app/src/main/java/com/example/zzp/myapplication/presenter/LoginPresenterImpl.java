package com.example.zzp.myapplication.presenter;

import com.example.zzp.myapplication.model.LoginModel;
import com.example.zzp.myapplication.model.LoginModelImpl;
import com.example.zzp.myapplication.model.User;
import com.example.zzp.myapplication.view.LoginView;

public class LoginPresenterImpl implements LoginPresenter, OnLoginFinishedListener {
    private LoginView loginView;
    private LoginModel loginModel;

    public LoginPresenterImpl(LoginView loginView) {
        this.loginView = loginView;
        this.loginModel = new LoginModelImpl();
    }

    @Override
    public void validateCredentials(User user) {
        if (loginView !=null){
            loginView.showProgress();
        }
        loginModel.login(user,this);
    }

    @Override
    public void onDestroy() {
        loginView=null;
    }

    @Override
    public void onUsernameError() {
        if (loginView != null) {
            loginView.setUsernameError();
            loginView.hideProgress();
        }
    }

    @Override
    public void onPasswordError() {
        if (loginView != null) {
            loginView.setPasswordError();
            loginView.hideProgress();
        }
    }

    @Override
    public void onSuccess() {
        if (loginView != null) {
            loginView.showSuccess();
        }
    }
}
