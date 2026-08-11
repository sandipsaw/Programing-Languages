#include <stdio.h>

int main() {
    // Decimal to Binary
    int n, reminder ,i=0;
    int binary[32];
    printf("Enter a Decimal number :");
    scanf("%d",&n);
    
    while(n>0){
        reminder = n % 2;
        binary[i] = reminder;
        i++;
        n = n/2;
    }
    for(i=i-1;i>=0;i--){
        printf("%d ",binary[i]);
    }

    return 0;
}