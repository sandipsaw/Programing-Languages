#include <stdio.h>

int main() {
    // Count positive, negative and zero
    int size,positive=0,negative=0 , zero = 0;
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
        if(arr[i]> 0){
            positive++ ;
        }else if(arr[i]<0){
            negative++;
        }
        else zero++;
    }
    printf("number of positive element is %d and negative element is %d and zero element is %d", positive,negative,zero);
    return 0;
}