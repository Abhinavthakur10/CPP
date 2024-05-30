#include<iostream>

using namespace std;

bool search(int arr[], int size, int key){

    for (int i=0; i<size; i++){
        if (arr[i]==key){
            return 1;
        }
    }
    return 0; 

}

int main(){

     int arr[10]={1,2,3,4,5,4,6,12,34,6};
     cout<<"Enter the value you want to find out"<<endl;
     int key;
     cin>>key;

     bool found = search(arr,10,key);
     if (found){

        cout<<"key is present"<<key<<endl;
     }
        else{
            cout<<"key is absent"<<endl;
        }
        
}

//////////////////////          reverse a Array     ///////////////////////////////////////////////

// int reverse(int arr[],int size){
//     int start=0;
//     int end=size-1;
    
//     while(start<=end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;

//     }

// }
// int printArray(int arr[],int size){

//     for (int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int arr[6]={3,4,5,6,7,9};
//     int brr[5]={12,45,56,74,33};
    
//     reverse(arr,6);
//     reverse(brr,5);

//     printArray(arr,6);
//     printArray(brr,5);
// }