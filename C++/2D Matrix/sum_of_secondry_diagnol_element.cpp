// sum_of_secondry_diagnol_element

#include <iostream>
#include <vector>
using namespace std;

int main(){
    // bubble search;

    int row,column,sum =0;
    cout << "enter the row of array : ";
    cin >> row;

    cout << "enter the column of array : ";
    cin >> column;

    vector<vector<int>> arr(row, vector<int>(column));

    cout << "Enter the element of array : ";
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin >> arr[i][j];
        }
    }
    cout << "sum of secondry diagnol element of array are : ";
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(i+j == column-1){
                sum = sum + arr[i][j];
            }
        }
    }
    cout << sum ;
    

    return 0;
}