// array_right_rotation_by_one
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // array right rotation by 1
    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    vector<int> arr(size);
    cout << "Enter the element of array : ";
    for(int i=0;i<size; i++){
        cin >> arr[i];
    }
    int temp =arr[size-1];
    for(int i=size-1; i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
    cout << "Array right rotation by 1 : ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    return 0;
}