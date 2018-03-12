package com.example.zzp.singleton;

/**
 * Created by zzp on 18-3-12.
 */

public class SingletonByInnerClass {
    /**
     * 类级的内部类，也就是静态的成员式内部类，该内部类的实例与外部类的实例没有绑定关系，
     * 而且只有被调用到才会装载，从而实现了延迟加载
     */
    private static class SingletonHolder{
        /**
         * 静态初始化器，由JVM来保证线程安全
         */
        private static final SingletonByInnerClass instance = new SingletonByInnerClass();
    }
    /**
     * 私有化构造方法
     */
    private SingletonByInnerClass(){
    }

    //Singleton类被载入JVM时，不会初始化单例类
    //只有 getInstance() 方法调用时,才会初始化 instance
    public static  SingletonByInnerClass getInstance(){
        return SingletonHolder.instance;
    }
}
