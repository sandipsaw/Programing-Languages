#include <stdio.h>

int main() {
    // Find the second largest number Input: 10 25 15 40 30 sl = 30
    int n, largest, second_largest;
    printf("Enter how many number : ");
    scanf("%d",&n);
    int arr[n];
    printf("Please Enter %d number :",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
if (arr[0] > arr[1]) {
    largest = arr[0];
    second_largest = arr[1];
} else {
    largest = arr[1];
    second_largest = arr[0];
}
    for(int i=2;i<n;i++){
        if(arr[i]>largest ){
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i]>second_largest){
            second_largest = arr[i];
        }
    }
    printf("second largest number = %d",second_largest);
    
    return 0;
}