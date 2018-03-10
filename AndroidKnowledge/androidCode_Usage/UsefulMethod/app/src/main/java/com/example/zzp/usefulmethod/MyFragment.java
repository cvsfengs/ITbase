package com.example.zzp.usefulmethod;

import android.support.v4.app.Fragment;

/**
 * Created by zzp on 18-3-7.
 */

public class MyFragment extends Fragment {

    //调用show，hide时候，可见性改变
    @Override
    public void onHiddenChanged(boolean hidden) {
        super.onHiddenChanged(hidden);
    }
}
