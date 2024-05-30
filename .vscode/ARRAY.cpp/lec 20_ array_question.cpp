#include <iostream>
#include <vector>

using namespace std;

vector<int> reverse(vector<int> v)
{

    int s = 0, e = v.size() - 1;
    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}

void printvector(vector<int> v)
{
    for (int i = 0; i< v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
}

int main()
{
    vector<int> v;

    v.push_back(11);
    v.push_back(1);
    v.push_back(5);
    v.push_back(8);
    v.push_back(2);

    vector<int> ans = reverse(v);

    cout<<"Here is your array before reversing:"<<endl;
    for (int i:v){
        cout<<i<<" ";
    }cout<<endl;


    cout << "An Array after reversing :" << endl;

    // for (int i:ans){
    //     cout<<i<<" ";
    // }

    printvector(ans);


}

// ///////////////////////       Merge and give sorted array Array   ///////////////////////////////////////////


// // #include <iostream>
// // using namespace std;

// // void mergearray(int arr1[], int n, int arr2[], int m, int arr3[])
// // {

// //     int i = 0, j = 0;
// //     int k = 0;
// //     while (i < n && j < m)
// //     {
// //         if (arr1[i] < arr2[j])
// //         {
// //             arr3[k++] = arr1[i++];

// //             // k++;
// //             // i++;
            
// //         }
// //         else
// //         {
// //             arr3[k++] = arr2[j++];
// //         }
// //     }

// //     // Now copy the value of arr1 which left 
// //     while (i < n)
// //     {
// //         arr3[k++] = arr1[i++];
// //     }
 
// //     // Now copy the value of arr2 if left
// //     while (j < m)
// //     {
// //         arr3[k++] = arr2[j++];
// //     }
// // }

// // void printarray(int arr[], int n)
// // {
// //     for (int i = 0; i < n; i++)
// //     {
// //         cout << arr[i] << " ";
// //     }
// // }

// // int main()
// // {
// //     int arr1[5] = {1,3,5,7,9};
// //     int arr2[3] = {2, 4,6};
// //     int arr3[8] = {0}; // Intialzing all the elements with zero
// //     mergearray(arr1, 6, arr2, 4, arr3);
// //     cout << "Here, is your sorted merge Array:" << endl;

// //     printarray(arr3, 8);
// // }




// /////////////////////////       Move zeros  /////////////////////////

// // #include<iostream>
// // #include<vector>

// // using namespace std;

// // void movezero(int nums[], int n){
// //     int nonzero=0;

// //         for(int j=0; j<n; j++){    // j should be zero if it is (nonzero+1) it will not replace the nonzero value at 0 index of arr
// //             if (nums[j] !=0){
// //                 swap(nums[j],nums[nonzero]);
// //                 nonzero++;
// //             }
    
// // }
// // }

// // void printarray(int arr[], int n ){
// //     for(int i=0; i<n; i++){
// //         cout<<arr[i]<<" ";
// //     }
// // }
// // int main(){
// //     int nums[5]={1,0,3,0,12};
// //     movezero(nums,5);
// //     cout<<"here is your array after moving zero:"<<endl;
// //     printarray(nums,5);
// // }



////////////////////////////             Rotate an array by the target(k)     ////////////////////////////////


// #include<iostream>
// using namespace std;

// void rotatearray(int arr[], int n, int k){
//     int e=n-1;
//     int i=0;
//     int l=i;
//     for (int j=e; j>k; j++){
        

//         arr[i]=arr[i+1];
//         arr[]=arr[j];
        
//         i++;
//     }

// }

// void printarray(int arr[], int n){

//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }

// }
// int main(){
//     int arr[8]={1,2,3,4,5,6,7,8};
//     rotatearray(arr,8,3);
//     cout<<"Here is your rotated array: "<<endl;

//     printarray(arr,8);


// }


////////////////////     CHECK FUNCTION IS SORted and rotated            /////////////////////////////////////////

// #include<iostream>
// using namespace std;

// int checkfunction(int arr[], int n){
//     int count=0;

//     for(int i=1; i<n; i++){
//         if(arr[i-1]>arr[i])
//         count++;
//     }
//     if(arr[0]<arr[n-1]){
//         count++;
//     }
//     return count<=1;

// }



// int main(){
//     int arr[8]={3,4,5,1,2};
//     bool ch=checkfunction(arr,5);
//     cout<<"Is your , function is rotated and sorted: "<< ch <<endl;



// }


/////////////////////////           SUM OF AN TWO ARRAY   ///////////////////////////////////////


// #include< iostream>
// #include < vector>

// using namespace std;

// int main(){
//     vector< int > v; 
//     vector< int > s;
    
//     int i=v.length()-1;
//     int j=s.length()-1;

//     vector< int > ans;
//     int carry=0;

//     while(i<=0 && j<=0){
//         int val1=v{i};
//         int val2=s[j];

//         sum= val1 +val2 + carry;

//         carry=sum/10;
//         int value= sum%10;

//         ans.push_back(value);
        
//         i--;
//         j--;

//     }

//     while(i=>0){
//         int sum = a[i]+ carry;
//         carry=sum/10;
//         value=sum%10;
//         ans.push_back(sum);
//         i--;


//     }
//     while(j=>0){
//         int sum = b[j]+ carry;
//         carry=sum/10;
//         value=sum%10;
//         ans.push_back(sum);
//         j--;


//     }
//     while(carry!=0){
//         int sum = a[i]+ carry;
//         carry=sum/10;
//         value=sum%10;
//         ans.push_back(sum);


//     }

//     return ans;
// }



