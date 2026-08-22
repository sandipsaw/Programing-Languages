// merged_array
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Merge two arrays
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
    vector<int> merged;
    for(int i =0; i<size1;i++){
        merged.push_back(arr1[i]);
    }
    for(int i =0; i<size1;i++){
        merged.push_back(arr2[i]);
    }
    
    cout << " element of merged array : ";
    for(int i=0; i<merged.size(); i++){
        cout << merged[i] << " ";
    }
    
    
    return 0;
}