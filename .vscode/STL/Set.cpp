#include<iostream>
#include<set>
using namespace std;

int main(){

    set<int>s;
    s.insert(4);
    s.insert(3);
    s.insert(2);
    s.insert(0);
    s.insert(9);

    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;


    cout<<"No. of element in the set: "<<s.count(9)<<endl;

}

