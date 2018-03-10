package com.example.zzp.threetransfrominteface;

import android.os.Parcel;
import android.os.Parcelable;

/**
 * Created by zzp on 18-3-9.
 */

public class UserParcelable implements Parcelable {

    private int userId;
    private String userName;
    private boolean isMale;


    UserParcelable(int userId, String userName, boolean isMale) {
        this.userId = userId;
        this.userName = userName;
        this.isMale = isMale;
    }

    public static final Creator<UserParcelable> CREATOR = new Creator<UserParcelable>() {
        @Override
        public UserParcelable createFromParcel(Parcel in) {
            return new UserParcelable(in);
        }

        @Override
        public UserParcelable[] newArray(int size) {
            return new UserParcelable[size];
        }
    };

    private UserParcelable(Parcel in) {
        userId = in.readInt();
        userName = in.readString();
        isMale = in.readInt() == 1;
    }

    @Override
    public int describeContents() {
        //一般返回零就可以了
        return 0;
    }

    @Override
    public void writeToParcel(Parcel dest, int flags) {
        dest.writeInt(userId);
        dest.writeString(userName);
        dest.writeByte((byte)(isMale?1:0));
    }
}
