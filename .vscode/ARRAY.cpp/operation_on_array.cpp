#include<iostream>
using namespace std;



// void swaparray(int arr[],int size){

//     for (int i=0; i<size; i+=2){

//         if ((i+1)<size){
//             swap(arr[i],arr[i+1]);
//         }
//     }
// }
    
// void printarray(int arr[],int size){
//     for (int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
// }


// int main(){
    
//     int arr[6]={2,3,5,6,33,55};
//     swaparray(arr,6);
    
//     printarray(arr,6);

// }

int sortedarray(int arr[],int size){

    int start=0, end=size -1;
    
    while(start<end){
        while(start==0){
            start++;

        }
        while(end==1){
            end++;
        }
        
    }

}
void printarray(int arr[],int size){
    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){

    int arr[8]={0,0,1,1,0,1,0,1};
    
    sortedarray(arr,8);

    printarray(arr,8);
}