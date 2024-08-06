#include <iostream>
using namespace std;

/*
void  sum_of_array(int arr[][4], int i, int j){   // row wise sum

    cout<<" printing sum--"<<endl;
    for(int i=0;i<3; i++){
    int sum =0;
        for(int j=0; j<4; j++){
            sum +=arr[i][j];
            
        }
        cout<<sum<< " ";
    }
}

void  sum_of_colarray(int arr[][4], int i, int j){   // column wise sum

    cout<<" printing sum--"<<endl;
    for(int j=0;j<4; j++){
    int sum =0;
        for(int i=0; i<3; i++){
            sum +=arr[i][j];
            
        }
        cout<<sum<< " ";
    }
}

int largestrowsum(int arr[][4], int row, int col){

    int maxi=INT16_MIN;
    int rowIndex= -1;

    for(int i=0;i<3; i++){
    int sum =0;
        for(int j=0; j<4; j++){
            sum +=arr[i][j];
            
        }
        if(sum > maxi){
            maxi= sum;
            rowIndex= i;
        }
    }

    cout<< "THE MAIXIMUM ROW SUM IS:"<<maxi<<endl;
    return rowIndex;

}
int main(){
    
    int arr[3][4];

    for (int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>> arr[i][j];

        }
    }

    sum_of_array(arr,3,4);
    cout<< endl;

    sum_of_colarray(arr, 3, 4);
    cout<<endl;

    int row_num=largestrowsum(arr,3,4);
    cout<<"Index of row having largest sum is:"<<row_num<<endl;

}
*/


/////////////////////////           wave generation output in 2D array            ///////////////////////////////////

/*
vector<int> waveprint(vector<vector<int>>arr, int nrows, int mcols){
    vector<int> ans;
    
    for(int col=0; col< mcols; col++){
        if(col&1){
            //odd index -- bottom to top

            for(int row= nrwos-1; row>=0; row--){
                ans.push_back{arr[row][col]};
            }

        }
        else{
            // 0 or even index-- top to bottom

            for(int row=0; row<nrwos; row++){
                ans.push_back{arr[row][col]};
            }
        }
    }
    return ans;
}
//       we almost traverse all element once so its time complexity is O(nm)

*/


