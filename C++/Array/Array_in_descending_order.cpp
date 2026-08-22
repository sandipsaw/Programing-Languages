// Array_in_descending_order
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    // Sort an array in descending order
    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    vector<int> arr(size);
    cout << "Enter the element of array : ";
    for(int i=0;i<size; i++){
        cin >> arr[i];
    }
    cout << "array in Descending order : ";
    sort(arr.begin(), arr.end(), greater<int>());
    for(int i=0;i<size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}