#include <stdio.h>

int main() {
    // Count even and odd elements
    int size,oddCount=0,evenCount=0;
    // float Avg;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int arr[size];
    printf("enter the element of array");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    // printf("the sum of Array Element are :");
    for(int i=0; i<size; i++){
        if(arr[i]%2 ==0){
            evenCount++ ;
        }else{
            oddCount++;
        }
    }
    printf("number of odd element is %d and even element is %d",oddCount,evenCount);
    return 0;
}