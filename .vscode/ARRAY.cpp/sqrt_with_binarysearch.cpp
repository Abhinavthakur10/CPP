
#include<iostream>
using namespace std;

long long int sqrtinteger(int n){
        int s=0;
        int e=n;
        long long int mid=s+(e-s)/2;
        long long int ans=-1;
        while(s<=e){
            long long int square=mid*mid;  // used long long so that square is lesser than 2^31 -1 //
            if(square==n){
                return mid;
            }
            if(square<n){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return ans;

}

double moreprecise(int n, int precision, int tempsol ){
    double factor =1;
    double ans=tempsol;
    for (int i=0; i<precision; i++){
        factor=factor/10;
        for (double j=ans; j*j<n; j=j+factor){
            ans=j;
        }
    }
    return ans;
    

}



int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    
    int  tempsol= sqrtinteger(n);
    cout<<"Your answer is:"<<moreprecise(n,3,tempsol);
}


