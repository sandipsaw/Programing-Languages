// avg_of_array_element
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Find the sum of all elements in an array
    int size,sum=0;
    double avg;
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
    avg = (double)sum / size;
    cout << "average of array element is : "<< avg ;
    return 0;
}