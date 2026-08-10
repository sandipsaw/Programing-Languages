#include <stdio.h>

int main() {
    // Count the number of digits
    int a = 1285475;
    int count = 0, rem;
    while(a>0){
        rem = a % 10;
        count ++;
        a = a / 10;
    }
    printf("the count of digit is : %d",count);
    return 0;
}