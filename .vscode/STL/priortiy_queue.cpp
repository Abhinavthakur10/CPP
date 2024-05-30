#include<iostream>
#include<queue>

using namespace std;
int main(){
    // Max heap
    cout<<"here, is your maximum heap in priority_queue: "<<endl;

    priority_queue<int> maxi;
    maxi.push(3);
    maxi.push(5);
    maxi.push(1);
    maxi.push(2);
    maxi.push(3);

    int n=maxi.size();
    for (int i=0; i<n; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    // Min heap
    cout<<"Here, is your minimum heap in priority_queue: "<<endl;
    priority_queue<int, vector<int>, greater<int> >mini;
    mini.push(5);
    mini.push(0);
    mini.push(1);
    mini.push(2);
    mini.push(3);
    mini.push(3);

    int m=mini.size();
    for (int b=0; b<m; b++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;

    // as we pop out all the value to print our queue. So, now our queue will become empty and return true(1)

    cout<<"does your queue becomes empty:"<<mini.empty()<<endl;



}

