// reverse_the_element_of_array_two.cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Print array elements in reverse
    int size,temp;
    cout << "Enter the size of array : ";
    cin >> size ;
    vector<int> arr(size);
    // vector<int> temp(size);
    cout << "Enter the element of array : ";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    int i=0 ,j=size-1;
    while(i<j){
        temp = arr[i];
        arr[i]= arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    cout<< "After reversing the Element of array are : ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    return 0;
}