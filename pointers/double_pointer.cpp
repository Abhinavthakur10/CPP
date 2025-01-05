#include<iostream>
using namespace std;
/*
int main(){

    int i=5;
    int *p= &i;
    int **p2 = &p;
    
    cout<< "address of  i "<< &i <<endl;
    cout<< "printing p "<< p << endl;
    cout<< "address of p "<< &p <<endl;

    cout<< *p2 << endl;

    
    
} 
*/

void update(int **p2){

    /* p2= p2+1; // it will change nothing in main function because it is function pass by vlaue. */

    /* *p2= *p2+1;  // it will increment in the value of p as it is not present in the update fucntion */

    **p2=**p2 +1 ;  // it will increment the value of i in  main fucntion

}

int main(){

    int i=5;
    int *p=&i;
    int **p2=&p;   // double pointer

    cout<< "before "<< i <<endl;
    cout<< "before"<< p << endl;
    cout<< "before"<< p2 <<endl;

    update(p2);

    cout<< "after "<< i <<endl;
    cout<< "after"<< p << endl;
    cout<< "after"<< p2 <<endl;

    cout << "hello world"<< endl;
    



}