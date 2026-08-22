// find_pair_whose_sum_equal_to_given_number
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Find the pair whose sum equals a given number
    int size,target;
    cout << "Enter the size of array : ";
    cin >> size;

    vector<int> arr(size);
    cout << "Enter the element of array : ";
    for(int i=0;i<size; i++){
        cin >> arr[i];
    }
    cout << "enter the targeted element : ";
    cin >> target;

    cout << "Output : ";
    for(int j=0;j<size;j++){
        for(int i=j;i<size;i++){
        if(arr[j]+arr[i]==target){
            cout << arr[j] << " " << arr[i] << endl;
        }
    }
    }
    return 0;
}
