#include <stdio.h>

int main() {
    // A perfect number is a positive whole number that equals the sum of its proper positive divisors, meaning all divisors excluding the number itself. For example, 6 has divisors 1, 2, and 3, and 1 + 2 + 3 = 6.
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    int copy = n ,sum = 0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum += i;
        }
    }
    if(sum == copy) printf("%d is a Perfect number",copy);
    else printf("%d is not a Perfect number",copy);
    return 0;
}