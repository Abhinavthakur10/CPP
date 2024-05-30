#include<iostream>
using namespace std;

int sums(int nums[],int size, int target){
    
    for (int i=0; i<size; i++){
        for(int j=i+1; i<size; j++){
            if (nums[i]+nums[j]==target){
                cout<< "Your taret value  is: "<<endl;
                int arr[100]= {nums[i],nums[j]};
                int hello=arr[100];
                return hello;


            }
        }
    }
}
// void printarray(int nums[], int size){
//     for(int i=0; i<size; i++){
//         cout<< nums[i]<<" ";
//     }
// }

int main(){
    int nums[4]={2,7,11,15};
    sums(nums,4,9);
//     printarray(nums,4);
}