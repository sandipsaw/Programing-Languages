// find_element_that_occuring_once
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int size;
    cout << "Enter the size of array : ";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter the elements of array : ";
    for(int i=0;i<arr.size();i++){
       cin >> arr[i]; 
    }

    int result = 0;
    for(int i=0;i<size;i++){
        result = result ^ arr[i];
    }
    cout << "Element occurring once = " << result;
    return 0;
}