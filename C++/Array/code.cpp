// code.cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Print simple code and length of array
    
    int size;
    cout << "Enter the size of array : ";
    cin >> size ;
    vector<int> arr(size);
    cout << "Enter the element of array : ";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout << "Element of array are : ";
    for(int i=0;i<size;i++){
        cout << " " << arr[i];
    }
    cout << "Size of array is :" << arr.size();
    return 0;
}