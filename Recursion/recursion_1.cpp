#include<iostream>
using namespace std;

/*
int factorial(int n){

    // Base condition
    if(n==0){
        return 1;
    }

    // int small_problem= factorial(n-1);

    // int bigger_problem= n* small_problem;
    // return bigger_problme;

    
    return n*factorial(n-1);

}

int main(){

    int n;
    cout<< "Enter any number: ";
    cin>>n;

    int ans=factorial(n);

    cout<< "Factorial of " << n << " is : " << ans<< endl;
    
}
*/

/////////////////////// fibonaci series ///////////

/*
int fib(int n){
    if (n==0)
        return 0;

    if (n==1)
        return 1;

    return fib(n-2)+ fib(n-1);
}

int main(){
    int n;
    cin>> n;

    int ans = fib(n);

    cout<< "Your fibonaci number is : " << ans << endl;

}
*/


/////////////////////////   Stair problem ////////////////////////

// find out the no. of ways to reach the stair if person can jump 2 stair and 1 stair at a time

int count(int n){

    //base case

    if (n<0)
    return 0;

    if (n==0)
    return 1;

    return count(n-2)+count(n-1); // recursion relation 

}

int main(){

    int n;
    cin>>n;

    int ans=count(n);

    cout << "No. of ways to reach n stair : " << ans << endl;

}