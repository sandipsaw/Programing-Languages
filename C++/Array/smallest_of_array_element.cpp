// smallest_of_array_element.cpp
#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main() {
    // Find the smallest element
    int size;
    int smallest = INT_MAX;
    cout << "Enter the size of array : ";
    cin >> size ;
    vector<int> arr(size);
    cout << "Enter the element of array : "; 
    for(int i=0; i<size ; i++){
        cin >> arr[i];
    }
   
    for(int i=0; i<size ; i++){
       if(arr[i] < smallest){
           smallest = arr[i];
       }
    }
    cout << "smallest of array element is : "<< smallest ;
    return 0;
}