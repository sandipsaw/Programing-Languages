#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Count even and odd elements
    int size;
    int odd=0 , even=0;
    cout << "Enter the size of array : ";
    cin >> size ;
    vector<int> arr(size);
    cout << "Enter the element of array : "; 
    for(int i=0; i<size ; i++){
        cin >> arr[i];
    }
   
    for(int i=0; i<size ; i++){
       if(arr[i]%2==0){
        even++;
       }
       else{
        odd++;
       }
    }
    cout << "freq of odd element is :"<<odd << " and even element is : "<< even ;
    return 0;
}