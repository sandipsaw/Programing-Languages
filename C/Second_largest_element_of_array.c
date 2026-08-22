#include <stdio.h>

int main() {
    // Find the second largest element
    int n;
    printf("Enter the size of Array : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter Array Element : ");
    for(int i=0; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    
    int max , max2;  
    if(arr[0]>arr[1]){
        max= arr[0];
        max2 = arr[1];
    }else{
        max= arr[1];
        max2 = arr[0];
    }
    for(int i=2; i<n ; i++){
        if(arr[i] > max){
            max2 = max;
            max = arr[i];
        }else if(arr[i]>max2){
            max2 = arr[i];
        }
    }
    printf("Second Largest element of array is : %d",max2);
    return 0;
}