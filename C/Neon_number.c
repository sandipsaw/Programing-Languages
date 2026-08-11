#include <stdio.h>

int main() {
    // A neon number is a number where the sum of the digits of its square equals the original number. For example, 9 is a neon number because its square is 81 (9 × 9 = 81) and the sum of its digits is 9 (8 + 1 = 9)
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    int copy = n ,sum = 0;
    int sq = n*n;
    
    while(sq!=0){
        int rem = sq % 10 ;
        sum += rem;
        sq /= 10;
    }
    printf("sum = %d \n",sum);
    if(sum == copy) printf("%d is a Neon number",copy);
    else printf("%d is not a Neon number",copy);
    return 0;
}