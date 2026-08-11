#include <stdio.h>

int main() {
    // Binary to Decimal
    int n,reminder,base=1, sum =0;
    printf("Enter a binary number :");
    scanf("%d",&n);
    while(n>0){
        reminder = n % 10;
        sum = sum + reminder * base;
        base *= 2;
        n /= 10;
    }
    printf("decimal number = %d",sum);
    

    return 0;
}