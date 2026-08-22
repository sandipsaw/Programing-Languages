#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Find the sum of all elements in an array
    int size,sum=0;
    cout << "Enter the size of array : ";
    cin >> size ;
    vector<int> arr(size);
    cout << "Enter the element of array : "; 
    for(int i=0; i<size ; i++){
        cin >> arr[i];
    }
   
    for(int i=0; i<size ; i++){
       sum = sum + arr[i];
    }
    cout << "sum of array element is : "<< sum ;
    return 0;
}