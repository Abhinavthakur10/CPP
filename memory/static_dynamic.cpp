#include<iostream>
using namespace std;


////////////////////////////////      Dynamic allocation of 2D ARRAY        ////////////////////////////////////////////

int main(){

//    int n;      if same number of rows or column
//    cin >> n;

   int row;
   cin>> row;

   int column;
   cin>> column;
   
   //creating 2D array 
   int **arr= new int *[row];

   for (int i=0; i<row; i++){
    arr[i]=new int[column];
   }

   // Taking inputs 
   for(int i=0; i<row; i++){
    for(int j=0; j<column; j++){
        cin>> arr[i][j];

    }
   }

   // Taking output
   for(int i=0; i<row; i++){
    for(int j=0; j<column; j++){
        cout<<  arr[i][j] << " ";

    }cout<< endl;
   }

   // Release energy

   for( int i=0; i<row; i++){
    delete []arr[i];
   }

   delete []arr;

   


}
