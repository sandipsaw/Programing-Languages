#include <stdio.h>

int main() {
    // print the value of array 
    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int arr[size];
    printf("enter the element of array");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    printf("the element of array are :\n");
    for(int i=0; i<size; i++){
        printf(" %d",arr[i]);
    }
    return 0;
}