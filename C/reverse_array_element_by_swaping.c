#include <stdio.h>

int main() {
    // Print array elements in reverse
    int size;
    
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int arr[size];

    printf("enter the element of array");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    int i=0, j= size-1;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j]= temp;
        i++;
        j--;
    }
    printf("reverse element are :");
    for(int k=0;k<size;k++){
        printf("%d ",arr[k]);
    }
    return 0;
}