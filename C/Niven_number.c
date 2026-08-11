#include <stdio.h>

int main() {
    // A Niven number (also called a Harshad number) is a whole number that can be divided evenly by the sum of its own digits. For example, 18 is a Niven number because 1 + 8 = 9, and 18 divides by 9 with no remainder
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    int copy = n ,sum = 0;
    // int sq = n*n;
    
    while(n!=0){
        int rem = n % 10 ;
        sum += rem;
        n /= 10;
    }
    printf("sum = %d \n",sum);
    if(copy % sum == 0) printf("%d is a Niven number",copy);
    else printf("%d is not a Niven number",copy);
    return 0;
}