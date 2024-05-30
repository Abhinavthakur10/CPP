#include<iostream>
#include<stack>

using namespace std;

int main(){

    stack<string> s;

    s.push("Abhinav");
    s.push("rahul");
    s.push("vinayak");

    // for stack the last element we given to stack is top element 
    cout<<"Top Element"<<s.top()<<endl;
    s.pop();
    cout<<"Top Element"<<s.top()<<endl;


}