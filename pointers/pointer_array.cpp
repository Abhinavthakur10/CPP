#include<iostream>
using namespace std;

int main(){
             /////////////////////////        pointer in integer array          ////////////////////////////////
/*
    int arr[10]= {2,4,7,6};

    cout<< "address of first memory block is " <<arr <<endl;          // name of array index to its first element location

    cout<< "address of first memory block is " << &arr[2] <<endl;    // here we can find out any element address in array
    
    cout<<" print first value of arr "<< *arr <<endl;                // *arr indicating twoards the 0th index of array
    cout<<" print second value of arr "<< *(arr+1) <<endl;           // this indicating to the next index of the 0th index by addding 1

    cout<<" add 1 to first value of arr " << *arr + 1<<endl;         // this adds 1 to the value of array  at 0thh index means it done increment 

    int i=2;
    cout<<arr[i]<<endl;
    cout<< *(arr+i) <<endl;

    cout<< *(i+arr)<<endl;  // the above will give same value but having sightly different index



  int temp[10]={1,2};
  cout<< sizeof(temp) <<endl;
  cout<< "using * with array " << sizeof(*temp) <<endl;
  cout<< "using & with array " << sizeof(&temp) <<endl;

  int *ptr = &temp[0];
  cout<< sizeof(ptr)  <<endl;
  cout<< "using * with ptr " << sizeof(*ptr) << endl;
  cout<<  "using & with ptr " << sizeof(&ptr) <<endl;

  // using & operator with both pointer amd array 
  // both give different address
  int a[20]= {1,2,3,4};
  cout<< &a[0] <<endl;

  int *p= &a[0];
  cout<< &p <<endl; // this indicate the address of p block where the address of a[0] value is stored


   int arr[10];

// ERROR : not possible because the address assign to 0th value indicating by ((arr)) can not be changed
    // arr=arr+1; 

   int *ptr=&arr[0];
   cout<< ptr << endl;
   ptr=ptr +1; // it will move to next integer
   cout<< ptr << endl;

*/
 

 ///////////////////////////////          pointer in   char  array         ////////////////////////////////////////////

  int arr[5]= {1,2,3,4,5};
    char ch[6]= "abcde";
    
    // cout acts different for both the integer and character array and character array pointer 
    cout<< arr << endl;
    // attention here 
    cout<< ch << endl;

    char *c = &ch[0]; 
    // print entire string

    cout<< c<< endl;

    char temp ='z';
    char *p=&temp;

    cout<< p << endl;

    return 0; 


} 
