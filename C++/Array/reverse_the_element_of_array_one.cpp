// reverse_the_element_of_array_one.cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Print array elements in reverse
    int size;
    cout << "Enter the size of array : ";
    cin >> size ;
    vector<int> arr(size);
    vector<int> temp(size);
    cout << "Enter the element of array : ";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    int i=0 ,j=size-1;
    for(int i=0;i<size;i++){
        temp[j] = arr[i];
        j--;
    }
    cout<< "After reversing the Element of array are : ";
    for(int i=0;i<size;i++){
        cout << temp[i] << " ";
    }
    return 0;
}