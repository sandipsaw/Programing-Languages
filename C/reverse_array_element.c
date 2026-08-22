#include <stdio.h>

int main() {
    // Print array elements in reverse
    int size;
    
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int arr[size], arr2[size];

    printf("enter the element of array");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    int i = 0;
    for(int j=size-1; j>=0;j--){
        arr2[i] = arr[j];
        i++;
    }
    printf("reverse element are :");
    for(int k=0;k<size;k++){
        printf("%d ",arr2[k]);
    }
    return 0;
}