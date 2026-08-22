// move_all_zero_to_left
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // move all zero to the left
    int size;
    cout << "Enter the size of array : ";
    cin >> size ;
     
    vector<int> arr(size);
    cout << "Enter the element of array : ";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    
    int j=0;
    for(int i=0;i<size;i++){
        if(arr[i] == 0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    return 0;
}