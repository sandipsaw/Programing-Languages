#include <stdio.h>

int main() {
    // Find the largest element in an array
    int n,max,smax;
    printf("Enter the size of Array : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter Array Element : ");
    for(int i=0; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    
    if(arr[0]>arr[1]){
        max = arr[0];
        smax = arr[1];
    }else{
        max = arr[1];
        smax = arr[0];
    }
    for(int i=2; i<n ; i++){
        if(arr[i] > max){
            smax = max;
            max = arr[i];
        }else if(arr[i]> smax && max != arr[i]){
            smax = arr[i];
        }
    }
    printf("Largest element of array is : %d and second laergest element is %d",max,smax);
    return 0;
}