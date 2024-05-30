#include <iostream>
using namespace std;

void bubble_sorting(int arr[], int n)
{
    // for(int i=1; i< n-1; i++){

    //     for (int j=0; j<(n-i); j++){

    //     } 
    // }

    // we can also used above with different value of i and j but result will be same 

    for (int i = 0; i < (n - 1); i++) 

    {
// we use (bool swapped ) if array is already sorted then its time complexity of Bubble sorting reduces to O(n^2) to O(n^2)
    bool swapped= false;

        for (int j = 0; j < (n - i - 1); j++)
        {

            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped= true;
            }
        }
    if(swapped== false){  
        break;   // if bool swapped remains false means no change in array means its already sorted and break the for loops 
    } 

    }

}

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

}
int main()
{
    int arr[6] = {1, 4, 9, 9 ,22 ,14};

    bubble_sorting(arr, 6);
    cout << "Here, is your sorted Array:" << endl;

    printarray(arr, 6);
}
