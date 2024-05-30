#include<iostream>
using namespace std;
// int isEven(int a){
//     if (a&1){
//         return 0;
//     }
//     else{
//         return 1;

//     }
// }
// int main(){
//     int num;
//     cin>>num;
//     int b=isEven(num);
//     if (b==0){
//         cout<<"Your answer is odd"<<endl;
//     }
//     else{
//         cout<<"your answer is even"<<endl;

//     }


int factorial(int n){
    int fact=1;
    for (int i=1; i<=n; i++){
        fact=fact*i;

    }
    return fact;


}
int nCr(int n, int r){
    int num=factorial(n);
    int deno=factorial(r)*factorial (n-r);
    int m=num/deno;
    
    return m;
}

int main(){
    int n,r;
    cin>>n>>r;
    
    cout<<"Your answer is"<<nCr(n,r) /*function call*/ <<endl;

}
   