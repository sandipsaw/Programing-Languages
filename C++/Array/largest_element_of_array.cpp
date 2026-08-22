// largest_element_of_array.cpp
#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main() {
    // Find the largest element
    int size;
    int largest = INT_MIN;
    cout << "Enter the size of array : ";
    cin >> size ;
    vector<int> arr(size);
    cout << "Enter the element of array : "; 
    for(int i=0; i<size ; i++){
        cin >> arr[i];
    }
   
    for(int i=0; i<size ; i++){
       if(arr[i] > largest){
           largest = arr[i];
       }
    }
    cout << "Largest of array element is : "<< largest ;
    return 0;
}