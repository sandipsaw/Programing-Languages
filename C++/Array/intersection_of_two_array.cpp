// intersection_of_two_array
#include <iostream>
#include <vector>
using namespace std;

int intersection(vector<int>& arr1, vector<int>& arr2){
    for(int i=0;i<arr1.size();i++){
        for(int j=0;j<arr2.size();j++){
            if(arr1[i] == arr2[j]){
                cout << arr1[i] << " ";
                break;
            }
        }
    }
}
int main(){
    int size1;
    cout << "Enter the size of first array : ";
    cin >> size1;
    vector<int> arr1(size1);
    cout << "Enter the element of first array :";
    for(int i=0;i<size1;i++){
        cin >> arr1[i];
    }

    int size2;
    cout << "Enter the size of second array : ";
    cin >> size2;
    vector<int> arr2(size2);
    cout << "Enter the element of second array :";
    for(int i=0;i<size2;i++){
        cin >> arr2[i];
    }
    cout << "Intersection of two array element are : ";
    intersection(arr1,arr2);

}