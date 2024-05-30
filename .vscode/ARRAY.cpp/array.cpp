#include <iostream>
using namespace std;

void printarray(int arr[], int size)
{
    cout << "printing the array" << endl;

    for (int i = 1; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "printing done" << endl;
}
int main()
{
    // decleration of array

    int number[15];
    cout<<number[0];
    // Initialization of array
    int numb[3] = {4, 5, 6};

    // Accersing the array
    cout << "Value at 1 in number array" << numb[1];

    ////////////////////////////////////////////////////////
    int create[15] = {4, 9};

    cout << "value in create" << create[1] << endl;

    int n = 15;
    for (int i = 0; i <= n; i++)
    {
        cout << create[i] << " "; // If we will not assign values to array it will save a random values//
    }

    // Intiallizing all array with 0 //
    // And initaliing the array with 1 wiht this statement is not possible//
    int fourth[10] = {0};
    printarray[fourth, 10];
    cout<<endl;

    ////// Character array//////////

    char ch[5]={'a','b','c','d'};
    cout<<ch[3]<<"  here is your ouput from ch array"<<endl;
    for (int m=0; m<5; m++){
        cout<<ch[m]<<" ";

    }

    cout << endl
         << "Everything is fine" << endl
         << endl;
}