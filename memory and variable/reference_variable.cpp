#include<iostream>
using namespace std;

/*
int main(){

    int i=5;
     
    // create reference variable 


    int &j=i;
    // here, j and i have same memory address so both have same value for increment and decrement 

    cout << i << endl;
    i++;
    cout << j << endl; 
    j++;                      
    cout<< i << endl;
    cout<< j << endl;

}
*/
void update2( int &j){ // PASS BY REFRENCE
    j++;
}

void update1(int n){ // this is PASS BY VALUE
     n++;
}

int main(){
     
     int n=5; 
     cout<< "Before : " << n << endl;

     update2(n);

     cout<< "after : " << n  << endl;
}