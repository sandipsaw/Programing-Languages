// print_all_element_of_matrix
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

    int size = row*column;

    vector<vector<int>> arr(row, vector<int>(column));

    cout << "Enter the element of array : ";
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin >> arr[i][j];
        }
    }
    cout << "Element of array are : " << endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    

    return 0;
}