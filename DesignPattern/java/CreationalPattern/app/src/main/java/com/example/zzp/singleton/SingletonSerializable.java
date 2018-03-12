package com.example.zzp.singleton;

import java.io.ObjectStreamException;
import java.io.Serializable;

/**
 * Created by zzp on 18-3-12.
 */

public class SingletonSerializable implements Serializable {
    //volatile避免指令重排序的优化,保证下面代码顺序执行
    private volatile static SingletonSerializable INSTANCE; //声明成 volatile
    private SingletonSerializable(){}

    //不使用synchronized,因为影响性能
    //使用static而进行二次检测
    //如果多个线程同时执行完了第一次检查，其中一个进入同步代码块创建了实例，后面的线程因第二次检测不会创建新实例。
    public static SingletonSerializable getSingleton() {
        if (INSTANCE == null) {
            synchronized (SingletonSerializable.class) {
                if (INSTANCE == null) {
                    INSTANCE = new SingletonSerializable();
                }
            }
        }
        return INSTANCE;
    }

    /**
     * 如果实现了Serializable, 必须重写这个方法
     */

    private Object readResolve() throws ObjectStreamException {
        return INSTANCE;
    }
}