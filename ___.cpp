#include <iostream>
using namespace std;

string reversestring(string st){
    int s=0;
    int e=st.length()-1;
    while(s<e){
        swap(st[s++], st[e--]);
    }
}
int main(){

    string st= "The sky is blue";
    reversestring(st);
    cout<<st;


}