// Count_positive_negative_and_zero
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Count positive, negative and zero
    int size;
    int positive=0 , negative=0 , zero=0;
    cout << "Enter the size of array : ";
    cin >> size ;
    vector<int> arr(size);
    cout << "Enter the element of array : "; 
    for(int i=0; i<size ; i++){
        cin >> arr[i];
    }
   
    for(int i=0; i<size ; i++){
       if(arr[i]>0){
        positive++;
       }
       else if(arr[i]<0){
        negative++;
       }else{
        zero++;
       }
    }
    cout << "freq of positive element is :"<<positive << " and negative element is : "<< negative << "zero element is : "<< zero ;
    return 0;
}
