// sum_of_odd_even_element
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Find the sum of even and odd elements separately
    int size,even=0,odd=0;
    cout << "Enter the size of array : ";
    cin >> size ;
     
    vector<int> arr(size);
    cout << "Enter the element of array : ";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    
    int j=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2 == 0){
            even = even + arr[i];
        }else{
            odd = odd + arr[i];
        }
    }
    cout << "sum of odd element is = " << odd << endl << "sum of even element is = " << even;
    
    return 0;
}