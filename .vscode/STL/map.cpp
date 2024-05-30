#include<iostream>
#include<map>

using namespace std;

int main(){

    map<int, string> m;

    m[1]="Abhinav";
    m[2]="Divyam";
    m[3]="Rikki";

    m.insert({5,"Vinayak"});

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;  
    }cout<<endl;
    
    // Give key to erase

    cout<<"map after removing key : "<<m.erase(5)<<endl; 
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;  
    }cout<<endl;

    // Find key is present or not 
    cout<<"key(2) is present or not: "<<m.count(2)<<endl;

    // m.find(1);

}