#include<iostream>
using namespace std;

char tolowercase(char x){

    if(x>='a' && x<='z'){
        return x;

    }
    else{
        char temp = x - 'A' + 'a';
        return temp;

    }
}

bool palindrome(char name[], int n ){

    // Check string is plaindrome or not


    int s=0;
    int e= n-1;

    while(s<=e){
        if( tolowercase(name[s]) != tolowercase(name[e])){
            return false;

        }
        else{
            s++;
            e--;
        }
    }
    return true;


}
void reverse(char name[], int n){

    // reverse a string


    int s=0;
    int e=n-1;
    
    while(s<e){
        swap(name[s++], name[e--]);

    }
}


int getlength(char name[]){

    // Lenght of String

    int count=0;
    for (int i=0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}



int main(){

    char name[10]; 
    cout<<"Enter your name: "<<endl;
    cin>>name;

    // name[2]='\0';  // It introduce null character after 2nd index in the array 

    cout<<"Here is Your  name: ";
    cout<<name<<endl;

    // Length of an String::::

    int len=getlength(name);
    cout<<"The length of an Array is: "<<len<<endl;

    // Reverse an string:::

    cout<<"Reverse Array : "  <<endl;
    reverse(name,len);
    cout<<name<<endl; 

    // check string is plaindrome or not

    cout<< "Is  your array is plaindrome or not: ";
    cout<<palindrome(name,len)<<endl;


    cout<<"Character is: "<<tolowercase('c')<<endl;
    cout<<"Character is: "<<tolowercase('B')<<endl;

    return 0;

}