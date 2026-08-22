#include <stdio.h>

int main() {
    // Find the sum of all elements in an array
    int size,sum = 0;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int arr[size];
    printf("enter the element of array");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    printf("the sum of Array Element are :");
    for(int i=0; i<size; i++){
        sum = sum + arr[i];
    }
    printf("%d",sum);
    return 0;
}