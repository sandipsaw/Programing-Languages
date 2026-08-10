#include <stdio.h>

int main() {
    // Find the sum of digits
    int a = 12345;
    int sum = 0, rem;
    while(a>0){
        rem = a % 10;
        sum += rem;
        a = a / 10;
    }
    printf("the sum of Digit is : %d",sum);
    return 0;
}