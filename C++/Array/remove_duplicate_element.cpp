// remove_duplicate_element.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int removeDuplicate(vector<int>& arr, int size){
    int k=1;
    for(int j=1;j<size;j++){
        if(arr[j]!=arr[j-1]){
            arr[k] =arr[j];
            k++;
        }
    }
    cout << "After removing Duplicate element from an array : ";
    for(int i=0; i<k ; i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int size,k;
    cout << "Enter the size of array : ";
    cin >> size;

    vector<int> arr(size);
    cout << "Enter the element of array : ";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    removeDuplicate(arr , size);
    
    return 0;
}