package com.example.zzp.singleton;

/**
 * Created by zzp on 18-3-12.
 */

public class Singleton {
    private volatile static Singleton INSTANCE; //声明成 volatile
    private Singleton (){}

    public static Singleton getSingleton() {
        if (INSTANCE == null) {
            synchronized (Singleton.class) {
                if (INSTANCE == null) {
                    INSTANCE = new Singleton();
                }
            }
        }
        return INSTANCE;
    }

}