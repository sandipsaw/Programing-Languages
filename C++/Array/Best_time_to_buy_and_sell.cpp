// Best_time_to_buy_and_sell
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    int size;
    cout << "enter the size of array : ";
    cin >> size;
    vector<int> arr(size);
    cout <<"Enter the element of array : ";
    for(int i=0; i<size;i++){
        cin >> arr[i];
    }
    int minprice = INT_MAX;
    int maxprofit = 0;

    for(int i=0;i<size;i++){
        int price = arr[i];
        if(price < minprice){
            minprice = price;
        }
        if(price-minprice > maxprofit){
            maxprofit = price - minprice;
        }
    }
    cout << "maximum profit : " << maxprofit;
    return 0;
}