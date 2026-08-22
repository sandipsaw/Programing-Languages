#include <stdio.h>

int main() {
    // Find the largest element in an array
    int n;
    printf("Enter the size of Array : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter Array Element : ");
    for(int i=0; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    
    int max = arr[0];
    for(int i=1; i<n ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("Largest element of array is : %d",max);
    return 0;
}