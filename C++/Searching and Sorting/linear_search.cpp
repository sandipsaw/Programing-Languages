// linear_search
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size,target;
    int index = -1;
    cout << "Enter the size of array : ";
    cin >> size;

    vector<int> arr(size);
    cout << "Enter the element of array : "; 
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout << "Enter the element you want to search :";
    cin >> target;

    for(int j=0;j<arr.size();j++){
        if(arr[j] == target){
            index = j;
        }
    }
    if(index == -1){
        cout << "Element not found ";
    }else{
        cout << "Element found at index : " << index ;
    }
    return 0;
}