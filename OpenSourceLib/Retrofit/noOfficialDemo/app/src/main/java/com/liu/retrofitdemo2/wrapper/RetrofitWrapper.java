package com.liu.retrofitdemo2.wrapper;

import com.liu.retrofitdemo2.apiurl.Constant;

import java.io.IOException;

import okhttp3.Interceptor;
import okhttp3.OkHttpClient;
import okhttp3.Response;
import retrofit2.Retrofit;
import retrofit2.converter.gson.GsonConverterFactory;
import retrofit2.converter.scalars.ScalarsConverterFactory;

/**
 * @Description: 描述
 * @AUTHOR 刘楠  Create By 2016/10/26 0026 10:30
 */
public class RetrofitWrapper {
    //单例
    private static RetrofitWrapper INSTANCE;
    // Retrofit 对象
    private Retrofit mRetrofit;

    private RetrofitWrapper(){

        OkHttpClient.Builder builder = new OkHttpClient.Builder().addInterceptor(new Interceptor() {
            @Override
            public Response intercept(Chain chain) throws IOException {
                return null;
            }
        }).addNetworkInterceptor(new Interceptor() {
            @Override
            public Response intercept(Chain chain) throws IOException {
                return null;
            }
        });


        OkHttpClient okHttpClient= builder.build();

        mRetrofit = new Retrofit.Builder()
                .baseUrl(Constant.BASE_URL)  //添加baseurl
                .client(okHttpClient)
                .addConverterFactory(ScalarsConverterFactory.create()) //添加返回为字符串的支持
                .addConverterFactory(GsonConverterFactory.create()) //create中可以传入其它json对象，默认Gson
                .build();
    }
    public static RetrofitWrapper getInstance() {

        if(INSTANCE == null) {
            synchronized(RetrofitWrapper.class) {
                if(INSTANCE == null) {
                    INSTANCE = new RetrofitWrapper();
                }
            }
        }

        return INSTANCE;
    }


    /**
     * 转换为对象的Service
     * @param service
     * @param <T>
     * @return 传入的类型
     */
    public <T> T create(Class<T> service){
        return mRetrofit.create(service);
    }
}
