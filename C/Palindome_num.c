#include <stdio.h>

int main() {
    // Check Palindrome Number
    int a = 1551;
    int copies = a;
    int rev = 0, rem;
    while(a>0){
        rem = a % 10;
        rev = rev * 10 + rem;
        a = a / 10;
    }
    if(copies == rev) printf("%d is a palindrome number",rev);
    else  printf("%d is not a palindrome number",rev);
    return 0;
}