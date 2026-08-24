// transpose_of_matrix
#include <iostream>
#include <vector>
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
    cout << "Transpose of matrix : ";
    for(int i=0;i<column;i++){
        int sum = 0;
        for(int j=0;j<row;j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}
