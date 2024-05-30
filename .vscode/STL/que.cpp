#include<iostream>
#include<queue>

using namespace std;

int main(){

    queue<string> q;

    q.push("Abhinav");
    q.push("vinayak");
    q.push("rahul");

    cout<<"size Before pop "<<q.size()<<endl;

    cout<<"first Element "<<q.front()<<endl;
    q.pop(); // In pop we queue we remove elemnt from starting
    cout<<"first Elemnt "<<q.front()<<endl;

    cout<<"size after pop "<<q.size()<<endl;

}