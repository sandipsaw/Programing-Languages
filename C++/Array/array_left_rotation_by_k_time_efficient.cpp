// array_left_rotation_by_k_time_efficient
#include <iostream>
#include <vector>
using namespace std;

int reverse(vector<int>& arr,int start,int end){
    int i=start,j=end;
    while(i<j){
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] =temp;
        i++;
        j--;
    }
}
int main(){
    int size;
    cout << "enter the size of array : ";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter the element of array : ";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    int k;
    cout << "How many time you want to rotate the array left direction :";
    cin >> k;
    reverse(arr,0,size-1);
    reverse(arr,0,size-k-1);
    reverse(arr,size-k,size-1);
    cout << "After rotate the array left direction by k time : ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    return 0;
}