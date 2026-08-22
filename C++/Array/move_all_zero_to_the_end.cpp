// move_all_zero_to_the_end
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int size;
    cout << "Enter the size of array : ";
    cin >> size;
    vector<int> arr(size);
    vector<int> temp(size);
    cout << "Enter the element of array : ";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    int j=0;
    for(int i=0;i<size;i++){
        if(arr[i] != 0){
            temp[j] = arr[i];
            j++;
        }
    }
    while(j<size){
        temp[j] = 0;
        j++;
    }
    cout << "After moving all zero to the end : ";
    for(int j=0;j<arr.size();j++){
        cout << temp[j] << " ";
    }
    return 0;
}