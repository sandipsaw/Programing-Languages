// sum_of_two_matrices
#include <iostream>
#include <vector>
using namespace std;

int main(){
    // bubble search;

    int row1,column1;
    cout << "enter the row of fisrt array : ";
    cin >> row1;

    cout << "enter the column of first array : ";
    cin >> column1;


    vector<vector<int>> arr1(row1, vector<int>(column1));

    cout << "Enter the element of array : ";
    for(int i=0;i<row1;i++){
        for(int j=0;j<column1;j++){
            cin >> arr1[i][j];
        }
    }
    int row2,column2;
    cout << "enter the row of second array : ";
    cin >> row2;

    cout << "enter the column of second array : ";
    cin >> column2;


    vector<vector<int>> arr2(row2, vector<int>(column2));

    cout << "Enter the element of array : ";
    for(int i=0;i<row2;i++){
        for(int j=0;j<column2;j++){
            cin >> arr2[i][j];
        }
    }
    cout << "addition of two matrix : " << endl;
    for(int i=0;i<row1;i++){
        int sum = 0;
        for(int j=0;j<column1;j++){
            cout << arr1[i][j] + arr2[i][j] << " ";
            
        }
        cout << endl;
        
    }
    return 0;
}
