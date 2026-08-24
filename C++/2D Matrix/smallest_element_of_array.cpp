// smallest_element_of_array
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    // bubble search;

    int row,column;
    cout << "enter the row of array : ";
    cin >> row;

    cout << "enter the column of array : ";
    cin >> column;

    int smallest = INT_MAX;

    vector<vector<int>> arr(row, vector<int>(column));

    cout << "Enter the element of array : ";
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin >> arr[i][j];
        }
    }
    cout << "smallest element of array are : ";
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(arr[i][j]< smallest){
                smallest = arr[i][j];
            }
        }
    }
    cout << smallest ;
    

    return 0;
}