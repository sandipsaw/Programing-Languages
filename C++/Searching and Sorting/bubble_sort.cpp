// bubble_sort
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
        for(int j=0;j<arr.size()-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout << "Array after sorted : ";
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }

    return 0;
}