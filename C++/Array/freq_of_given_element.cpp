// freq_of_given_element
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Count frequency of a given element
    int size,search,found=0,freq=0;
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
            freq++;
        }
    }
    cout << "frequency of element is " << freq << endl ;
    if( found == 0){
        cout << "Element not found";
    } 
    return 0;
}
