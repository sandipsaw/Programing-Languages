#include <stdio.h>

int main() {
    // Find the smallest element in an array
    int n;
    printf("Enter the size of Array : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter Array Element : ");
    for(int i=0; i<n ; i++){
        scanf("%d",&arr[i]);
    }

    int min = arr[0];
    for(int i=1; i<n ; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("Smallest element of array is : %d",min);
    return 0;
}