#include <stdio.h>

int main() {
    // Find the average of array elements
    int size,sum = 0;
    float Avg;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int arr[size];
    printf("enter the element of array");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    printf("the sum of Array Element are :");
    for(int i=0; i<size; i++){
        sum = sum + arr[i];
    }
    Avg = (float) sum / size;
    printf("%.2f",Avg);
    return 0;
}