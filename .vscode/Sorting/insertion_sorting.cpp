#include <iostream>
using namespace std;

void insertion_sorting(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1; // we used it here becaue we need j oustide of the nested for loop scope
        for (; j >= 0; j--) // loop will go to (i-1 to  0 ) value because we compare the last values in the insertion sorting 
        {

            if (arr[j] > temp)
            {

                arr[j + 1] = arr[j];  // this will shift the array to the left side if arr i> temp
            }
            else
            {
                break; // Break the loop if arr j< temp means it is already sorted and then try for next alteration of i
            }

        }
    arr[j + 1] = temp;  // at time of comparison j will be at lesser index and we have to put temp to next value of j so we did (j+1)
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
    int arr[6] = {1, 4, 9, 5, 22, 14};

    insertion_sorting(arr, 6);
    cout << "Here, is your sorted Array:" << endl;

    printarray(arr, 6);
}