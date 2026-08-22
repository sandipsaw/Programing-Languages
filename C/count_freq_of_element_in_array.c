#include <stdio.h>

int main() {
    // Count frequency of a given element
    int size,search,freq=0;
    
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int arr[size];

    printf("enter the element of array");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the element you want to count the frequency : ");
    scanf("%d",&search);

    for(int i=0;i<size;i++){
        if(arr[i] ==search){
            freq++;
        }
    }
    printf("the frequency of element is : %d",freq);
    return 0;
}