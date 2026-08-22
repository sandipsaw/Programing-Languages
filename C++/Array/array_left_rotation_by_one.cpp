// array_left_rotation_by_one
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // array left rotation by 1
    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    vector<int> arr(size);
    cout << "Enter the element of array : ";
    for(int i=0;i<size; i++){
        cin >> arr[i];
    }
    int temp =arr[0];
    for(int i=0; i<size;i++){
        arr[i] = arr[i+1];
    }
    arr[size-1] = temp;
    cout << "Array left rotation by 1 : ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    return 0;
}