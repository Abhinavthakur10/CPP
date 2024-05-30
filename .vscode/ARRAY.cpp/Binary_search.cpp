#include<iostream>
using namespace std;

int binarysearch(int arr[], int size, int key){

    int start=0;
    int end=size-1;
    int mid= start+ (end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        //Move to right side
        if(key>arr[mid]){
            start=mid+1;
        }
        //move to the left side
        else{
            end=mid-1;
        }
        //Now update the mid
        mid= start+ (end-start)/2;  
    }
    return -1;
}

int main(){

    // array should be non-decreasing array/////////
    
    int arr[6]={2,4,5,6,7,8};
    int arr2[5]={33,44,55,66,99};
    cout<<arr[4]<<endl;
    int indexarr=binarysearch(arr,6,3);

    cout<<"3 is avilable on the Index of arr: "<<indexarr<<endl;

    int indexarr2=binarysearch(arr2,5,99);
    cout<<"99 is avilable on the Index of arr: "<<indexarr2<<endl;


}


