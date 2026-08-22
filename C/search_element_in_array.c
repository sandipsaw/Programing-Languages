#include <stdio.h>

int main() {
    // Search an element in an array
    int size,search,found=0;
    
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int arr[size];

    printf("enter the element of array");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the element you want to search : ");
    scanf("%d",&search);

    for(int i=0;i<size;i++){
        if(arr[i] ==search){
            found = 1;
            printf("element found at index %d",i);
            break;
        }
    }
    if(found == 0){
        printf("Element not found");
    }
    return 0;
}