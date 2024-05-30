#include<iostream>
using namespace std;
#include<climits>

int getmax(int num[],int n){

    int max= INT_MIN;
    for(int i=0; i<n; i++){
        if (num[i]>max){
            max=num[i];
        }
    }
    return max;

}
int getmin(int num[],int n){

    int min= INT_MAX;
    for(int i=0; i<n; i++){
        if (num[i]<min){
            min=num[i];
        }
    }
    return min;

}

    

int main(){
    int size;
    cout<<"Enter the size you want of an array"<<endl;
    cin>>size;

    //taking input in array
    int num[100];
    for (int i=0; i<size; i++){
         cin>>num[i];
        
    }
    cout<<"Your array maximum value is:"<<getmax(num,size)<<endl;
    cout<<"Your array minimum value is:"<<getmin(num,size)<<endl;

}