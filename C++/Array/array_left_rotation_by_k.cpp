// array_left_rotation_by_k
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int size, k;
    cout << "Enter the size of array :";
    cin >> size;
    vector<int> arr(size);
    vector<int> temp(size);
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout << "Enter how many time you want to rotate the array :";
    cin>> k;
    k = k % size;
    for(int i=0;i<size;i++){
        temp[i] = arr[(i+k)%size];
    }
    cout << "After rotating the array k Time : ";
    for(int i=0;i<size;i++){
        cout << temp[i] << " ";
    }
    
    return 0;
}