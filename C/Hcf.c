#include <stdio.h>

int main() {
    // Find Factorial of a Number
    int gcd, a,b;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    
    for(int i=1; i<a && i<b; i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }
    printf("hcf of two number is : %d",gcd);
    return 0;
}