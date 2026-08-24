// selection_sort
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
    for(int i=0;i<arr.size()-1;i++){
        int small = i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]<arr[small]){
                small = j;
            }
        }
        if(i != small){
            int temp = arr[i];
            arr[i] = arr[small];
            arr[small] = temp;
        }
    }
    cout << "Array after sorted : ";
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }

    return 0;
}