// max_smax_element_from_array
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Remove duplicate elements
    int size,Max,Smax;
    cout << "Enter the size of array : ";
    cin >> size ;
     
    vector<int> arr(size);
    cout << "Enter the element of array : ";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    Max = max(arr[0],arr[1]);
    Smax = min(arr[0],arr[1]);
    for(int i=2; i<size ; i++){
        if(arr[i]>Max){
            Smax = Max;
            Max = arr[i];
        }
        else if(arr[i]>Smax && arr[i] != Max){
            Smax = arr[i];
        }
    }
    cout << "Maximumx number is : " << Max << endl << "Second maximum number is = " <<Smax ; 
    return 0;
}