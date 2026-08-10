#include <stdio.h>

int main() {
    // Check Armstrong Number
    int a = 153;
    int copies = a;
    int rem, val = 0;
    while(a>0){
        rem = a % 10;
        val += (rem *rem * rem);
        a = a / 10;
    }
    if(copies == val) printf("%d is a Armstrong number",val);
    else  printf("%d is not a Armstrong number",val);
    return 0;
}