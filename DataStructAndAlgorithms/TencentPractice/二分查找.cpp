#include <iostream>
#define CAPACITY 256
using namespace std;


struct SequenceList{
	int data[CAPACITY];
	int length;
};

//思考把arr.data[mid]与key的比较换成>= <=的情况会是怎样
int binarySearch(SequenceList arr,int key){
	int left=0;
    int right=arr.length-1;

    while(left<=right){
        int mid=(right+left)/2;
        if(arr.data[mid]==key){
            return mid;
        }else if(arr.data[mid]<key){
            left=mid+1;
        }else if(arr.data[mid]>key){
            right=mid-1;
        }
    }
}   

int main(){
	return 0;
}
