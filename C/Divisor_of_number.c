#include <stdio.h>

int main() {
    // Find all divisors of a number
    int n;
    printf("Enter a  number : ");
    scanf("%d",&n);
    printf("Divisor of %d is ",n);
    for(int i=1;i<=n/2;i++){
        if(n%i == 0){
            printf("%d ",i);
        }
    }
    printf("%d ",n);
    
    return 0;
}