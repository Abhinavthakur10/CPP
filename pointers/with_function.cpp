#include <iostream>
using namespace std;

void print(int *p){
    cout<< *p << endl;
}

void update(int *p){

    // p=p+1;
    // cout<< "inside function "<< p << endl;

    *p=*p+1;
}

int getsum(int arr[], int n){

    cout<< endl<< " size of array: "<< sizeof(arr) << endl;
    int sum=0;
    for(int i=0, i<n, i++){
        sum += arr[i];

    }
    return sum;

}
int main(){

    int value =5;
    int *p=&value;

   // print(p);
   
   // address of any pointer can not be update in another funtion 
   
   /*
   cout<< "before"<< p<< endl;
   update(p);   
   cout<< "after" << p << endl;
   */

   // value of any pointer can be update or modify in another function because it takes the value into conisderation not address
   cout<< "before with * "<< *p<< endl;
   update(p);   
   cout<< "after with * " << *p << endl;

   
   int arr[5]= {1,2,3,4,5};

   cout<< "sum is " << getsum(arr,5)<< endl;


    return 0;

}