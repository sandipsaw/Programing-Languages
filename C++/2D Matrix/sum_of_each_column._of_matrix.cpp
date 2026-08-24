// sum_of_each_column._of_matrix
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


    vector<vector<int>> arr(row, vector<int>(column));

    cout << "Enter the element of array : ";
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0;i<row;i++){
        int sum = 0;
        for(int j=0;j<column;j++){
            sum = sum + arr[j][i];
        }
        cout << "Sum of column " << i+1 << " is : " << sum << endl;
    }
    return 0;
}