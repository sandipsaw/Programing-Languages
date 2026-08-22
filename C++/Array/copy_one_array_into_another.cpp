// copy_one_array_into_another
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Find the sum of even and odd elements separately
    int size;
    cout << "Enter the size of array : ";
    cin >> size ;
     
    vector<int> arr1(size);
    vector<int> arr2(size);

    cout << "Enter the element of array : ";
    for(int i=0;i<size;i++){
        cin >> arr1[i];
    }
    
    for(int i=0; i<size; i++){
        arr2[i] = arr1[i];
    }
    cout << "Element of array2 : ";
    for(int i=0; i<size; i++){
        cout << arr2[i] << " ";
    }
    
    return 0;
}