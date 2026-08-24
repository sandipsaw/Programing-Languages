// insertion_sort
#include <iostream>
#include <vector>
using namespace std;

int main(){
    // bubble search;

    int size;
    cout << "enter the sie of array : ";
    cin >> size;

    vector<int> arr(size);
    cout << "Enter the element of array : ";
    for(int i=0;i<arr.size();i++){
        cin >> arr[i];
    }
    for(int i=1;i<arr.size();i++){
        int j = i-1;
        int key = arr[i];
        while(j >= 0 && arr[j]> key ){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    cout << "Array after sorted : ";
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }

    return 0;
}