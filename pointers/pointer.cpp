#include<iostream>
using namespace std;

int main(){
    int num=5;
    
    cout<<num<<endl;

    cout<<"address of num -"<<&num<<endl;

    // create an pointer( pointer datatype should be same as to the variable pointer)
    int *ptr=&num;

    cout<<"value is: "<<*ptr<<endl; // jwith * it will give value of address stored in it

    cout<<"addres is: "<<ptr<<endl; // without * it will print address

    double d=4.3;
    double *dptr =&d;


    cout<<"size of interges is"<<sizeof(num)<<endl;

    cout<< "size of pointer is "<<sizeof(ptr)<<endl;
    cout<<"size of pointer is"<< sizeof(dptr)<<endl;

    int num1 =5;
    int a=num1;
    cout<<"a before : "<<num1<<endl;
    a++;
    cout<<"a after : "<<num1<<endl;

    int *p = &num1;
    cout<<"Before : "<<num1<<endl;
    (*p)++;                            // this is increment in pointer : which increase the value which is stored at address in pointer
    cout<<"after : "<<num1<<endl;

    // copy the pointer to other pointers

    int *q=p;
    cout<<p<<" - "<< q <<endl;
    cout<< *p << " - " << *q<<endl;
}