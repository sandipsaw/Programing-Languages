#include <stdio.h>

int main() {
    // move all 0 to the right side and 1 to the left side
    int size;
    
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int arr[size];

    printf("enter the element of array");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    int i=0,j=0;
    while(i<size){
        if(arr[i] == 0){
            int temp = arr[i];
            arr[i]= arr[j];
            arr[j] = temp;
            j++;
        }
        i++;
    }
    printf(" element are :");
    for(int k=0;k<size;k++){
        printf("%d ",arr[k]);
    }
    return 0;
}