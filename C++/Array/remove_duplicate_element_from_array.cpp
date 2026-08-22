// remove_duplicate_element_from_array.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Remove duplicate elements
    int size;
    cout << "Enter the size of array : ";
    cin >> size ;
     
    vector<int> arr(size);
    cout << "Enter the element of array : ";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    
    for(int i=0;i<size;i++){
        for(int j=i+1 ; j<size;j++){
            if(arr[i] == arr[j]){
                for(int k=j; k<size-1; k++){
                    arr[k] = arr[k+1];
                }
                size--;
                j--;
            }
        }
    }
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    return 0;
}