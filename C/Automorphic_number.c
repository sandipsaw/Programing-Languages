#include <stdio.h>

int main() {
    // check Automorphic number
    int count = 0, n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int copy = n;
    int sq = n * n;
    while(n>0){
        count++;
        n = n / 10;
    }
    int power = 1;
    for(int i=1;i<=count;i++){
        power *= 10;
    }
    int num = sq % power;
    if(num == copy) printf("%d is a Automorphic Number",num);
    else  printf("%d is not a Automorphic Number",num);
    return 0;
}