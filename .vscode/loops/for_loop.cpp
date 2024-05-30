#include<iostream>
#include<math.h>
using namespace std;
int main(){

    // int n;
    // cin>>n;
    // for (int i=1; i<=n; i++  ){
    //     cout<<i<<endl;
    // }


    // int n;
    // cin>>n;
    // int i=1;
    // // for (; ; ){
    // //    if(i<=n){
    // //     cout<<i;
    // //    }
    // //    else{
    // //     break;
    // //    }
    // // i++;
    // // }
    

    /////////////////////..............Fabonacci series....................///////////////////////

    // int n=10;
    // int a = 0;
    // int b = 1;
    // cout<<a<<" " <<b<<" ";
    // for (int i=1; i<=n; i++ ){
    //     int nextnumber=a+b;
    //     cout<<nextnumber<<" ";
    
    // a=b;
    // b=nextnumber;
    // }

//////////////////////////////..........Prime or not with help of For loop..............////////////////////////

    // int n;
    // cin>>n;
    // bool nisprime=1;  // for bool we put number to be prime which equal to 1 means it is true then
    // for (int i=2; i<=n; i++){
    //     if (n%i==0){
    //         nisprime=0;
    //         break;

    //     }
    // }
    // if (nisprime==0){
    //     cout<<"Your Number is NOt prime";
    //     }
    // else{
    //     cout<<"YOur number is prime";
    // }
    // int n;
    // cin>>n;
    // for (int i=0; i<=n; i++){
    //     cout<<"He"<<endl;
    //     cout<<"hey";
    //     continue;
    //     cout<<"Mujhe bt ni krni";
    // }



//    int n;
//    cin>>n;

//    int product=1;
//    int sum=0;
//    while(n!=0){


//     int digit=n%10;
//     product=product*digit;
//     sum +=digit;
//     n=n/10;

//    }
//    int answer=product - sum;
//    return answer;
//    cout<<answer;


/////////////////////.....DECIMAL TO BINARY..............///////////////////////////

// int n;
// cin>>n;
// int answer=0;
// int i=0;
// while(n!=0){
//     int bit=n&1;
//     answer= ((bit*pow(10,i)) +answer);
//     n=n>>1;
//     i++;

// }
// cout<<"Your number in Binary is: "<<answer<<endl;



/////////////////////.....BINARY TO  DECIMAL..............///////////////////////////

// int n;
// cin>>n;
// int i=0;
// int answer=0;
// while(n!=0){
//     int digit=n%10;
//     if(digit==1){
//         answer=answer + pow(2,i);
//     }
//     n=n/10;
//     i++;
// }
// cout<< answer <<endl ;



}