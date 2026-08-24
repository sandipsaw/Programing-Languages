// Binary_search
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int size,target;
    cout << "Enter the size of arra : ";
    cin >> size;

    vector<int> arr(size);
    cout << "Enter the element of array : ";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout << "Enter the element you want to search : ";
    cin >> target;
    sort(arr.begin(),arr.end());
    int start =0 ,end= size-1;
    while(start <= end){
        int mid = (start + end)/2;
        if(arr[mid] > target){
            end = mid-1;
        }
        else if(arr[mid] < target){
            start = mid +1;
        }
        else{
            cout << "Elenent found at index : "<< mid;
            break;
        }
        

    }
}