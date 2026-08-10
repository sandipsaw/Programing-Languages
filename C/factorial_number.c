#include <stdio.h>

int main() {
    // Find Factorial of a Number
    int fact = 1 , n;
    printf("Enter a number :");
    scanf("%d",&n);
    int num = n;
    
    while(n>0){
        fact *= n;
        n--;
    }
    printf("factorial of %d is  %d", num,fact);
    return 0;
}