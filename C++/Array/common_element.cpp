// common_element
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Find common elements between two arrays
    int size1,size2;
    cout << "Enter the size of first array : ";
    cin >> size1 ;
     
    vector<int> arr1(size1);
    cout << "Enter the element of first array : ";

    for(int i=0;i<size1;i++){
        cin >> arr1[i];
    }
    cout << "Enter the size of second array : ";
    cin >> size2 ;
    vector<int> arr2(size2);
    cout << "Enter the element of second array : ";

    for(int i=0;i<size2;i++){
        cin >> arr2[i];
    }
    cout << "Common element are : ";
    for(int i=0; i<size1; i++){
        for(int j=0; j<size2 ; j++){
            if(arr1[i] == arr2[j]){
                cout << arr1[i] << " ";
            }
        }
    }
    
    
    return 0;
}