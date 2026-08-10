#include <stdio.h>

int main() {
    // Reverse a number
    int a = 1285475;
    int rev = 0, rem;
    while(a>0){
        rem = a % 10;
        rev = rev * 10 + rem;
        a = a / 10;
    }
    printf("the reverse of number is : %d",rev);
    return 0;
}