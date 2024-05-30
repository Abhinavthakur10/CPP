
// // ///////////////////////   FIND OUT THE LAST ANS FIRST ELMENT IN THE SORTED ARRAY ///////////////////////////////////////

// #include<iostream>
// using namespace std;


// int firstoccur( int arr[], int size, int key){

//     int start=0;
//     int end= size-1;
//     int mid= start + (end-start)/2;
//     int ans=-1;
//     while(start<=end){
//         if (arr[mid]==key){
//             ans=mid;
//             end=mid-1;
//         } 
//         else if(key>mid) {
//             start=mid +1;
//         }
//         else if(key<mid){
//             end=mid-1;

//         }

//         mid= start + (end-start)/2;

//     }
//     return ans;
// }

// int lastoccur( int arr[], int size, int key){

//     int start=0;
//     int end= size-1;
//     int mid= start + (end-start)/2;
//     int ans=-1;

//     while(start<=end){
//         if (arr[mid]==key){
//             ans=mid;
//             start=mid+1;
//         } 
//         else if(key>mid) {
//             start=mid +1;
//         }
//         else if(key<mid){
//             end=mid-1;

//         }

//         mid= start + (end-start)/2;

//     }
//     return ans;
// }



// int main(){
//     int arr[8]={1,3,4,5,5,5,7,8};
    
//     cout<<"First occurance of 5 at index is:"<<firstoccur(arr,8,5)<<endl;
//     cout<<"Last occurance of 5 at index is:"<<lastoccur(arr,8,5)<<endl;
    

// }




// #include<iostream>
// using namespace std;

// int foundpeak(int arr[], int size){
//     int start=0;
//     int end=size-1;
//     int mid= start + (end-start)/2;
    
//     while(start<mid){
//         if(arr[mid]<arr[mid+1]){
//             start=mid+1;

//         }
//         else{
//             end=mid;
//         }
//         mid= start + (end-start)/2;
//     return start;
//     }
    

// }

// int main(){
//     int arr[4]={2,5,6,7};

//     int peak=foundpeak(arr,4);
//     cout<< "Highest elment in the array is: "<<peak<<endl;

// }


//////////////////////                find pivot in the rotated array ./////////////////////////////////////////

#include<iostream>
using namespace std;
int getpivot( int arr[], int size)
{
    int s=0;
    int e=size -1;
    int mid= s+ (e-s)/2;

    while(s<e){

        if (arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{ 
            e=mid;
        }
        mid= s+ (e-s)/2;
    }
    return s;    // or we can also return (e) both have same value//

}
int main(){
    int arr[5]={3,8,10,17,1};

    cout<<"Pivot in the array is:"<< getpivot(arr,5);

}