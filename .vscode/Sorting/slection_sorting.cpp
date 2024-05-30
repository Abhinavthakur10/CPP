#include <iostream>
using namespace std;
void sorting(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int minindex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }
        swap(arr[minindex], arr[i]);
    }

}
void printarray(int arr[], int n){  // Use Void function if there is no return value //  
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
        
    }

}
int main()
{
    int arr[5] = {4, 6, 5, 8, 2};

    sorting(arr,5);     // Firstly we  give value to sorting fucntion then we give to  printarray function to get printed array//
    cout << "Here, is your sorted Array:" << endl;

    printarray(arr,5);

}