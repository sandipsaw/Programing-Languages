// search_element_form_array.cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Search an element in an array
    int size,search,found=0;
    cout << "Enter the size of array : ";
    cin >> size ;
    vector<int> arr(size);
    cout << "Enter the element of array : ";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout << "Enter the element you want to search : ";
    cin >> search ;
    for(int i=0; i<size ; i++){
        if(arr[i] == search){
            found = 1;
            cout << "Element found at index " << i;
            break;
        }
    }
    if( found == 0){
        cout << "Element not found";
    } 
    return 0;
}