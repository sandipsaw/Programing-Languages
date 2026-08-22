// union_of_two_array
#include <iostream>
#include <vector>
using namespace std;

int unionOfArray(vector<int>& arr1,vector<int>& arr2){
    for(int i=0;i<arr1.size();i++){
        cout << arr1[i] << " ";
    }
    for(int j=0;j<arr2.size();j++){
        bool found = false;
        for(int k=0;k<arr1.size();k++){
            if(arr2[j] == arr1[k]){
                found = true;
                break;
            }
        }
        if(!found){
            cout << arr2[j] << " ";
        }
    }
}

int main(){
    int size1;
    cout << "Enter the size of first array : ";
    cin >> size1;
    vector<int> arr1(size1);
    cout << "Enter the element of first array : ";
    for(int i=0;i<size1;i++){
        cin >> arr1[i];
    }

    int size2;
    cout << "Enter the size of second array : ";
    cin >> size2;
    vector<int> arr2(size2);
    cout << "Enter the element of second array : ";
    for(int i=0;i<size2;i++){
        cin >> arr2[i];
    }
    cout << "Union of two array are : ";
    unionOfArray(arr1,arr2);
}