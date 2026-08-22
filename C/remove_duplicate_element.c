#include <stdio.h>

int main() {
    // Remove duplicate elements
    int size;
    
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int arr[size];

    printf("enter the element of array");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        for(int j=i+1;  j<size;j++){
            if(arr[i] == arr[j]){
                for(int k=j;k<size;k++){
                    arr[k] = arr[k+1];
                }
                size--;
                j--;
            }
        }
    }
    
    printf(" element are :");
    for(int k=0;k<size;k++){
        printf("%d ",arr[k]);
    }
    return 0;
}