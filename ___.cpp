#include<iostream>
#include<vector>
using namespace std;

int findduplicate(int arr[],int n){
    std::vector<int> v;
    for(int i=0; i<n-1; i++){
       if( arr[i]==arr[i+1]){
        int value=arr[i];
        v.push_back(value);
        
       }
    }
    return v;



}

void printarray(vector< int> v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}
int main(){

    int arr[5]={1,2,3,4,3};
    vector<int> v;
    findduplicate(arr,5);
    cout<<"find duplicate in array: "<<endl;
    printarray(v);


}