#include<iostream>
#include<list>

using namesapce std;
int main(){
    list<int> l;

    // 
    list<int> n(5,100);
    cout<<"Printing N"<<endl;
    for(int i:n){
        cout<<i<< " ";
    }cout<<endl;

    // 
    l.push_back(1);
    l.push_front(2);

    for(int i:1){
        cout<<i<< " ";
    }cout<<endl;

// 
    l.erase(l.begin());
    cout<<"After Erase"<<endl;
    for(int i:1){
        cout<<i<< " ";
    }cout<<endl;
    
    // 
    l.pop_back();
}
