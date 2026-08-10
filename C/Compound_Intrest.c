#include <stdio.h>
#include <math.h>
int main() {
    // Write C code here
    float P , R , T , A , CI;
    printf("Enter Principle : ");
    scanf("%f",&P);
    printf("Enter Rate : ");
    scanf("%f",&R);
    printf("Enter Time : ");
    scanf("%f",&T);
    
    A = P  * (1 + R/100);
    CI = A - P;
    // printf("%.0f \n",trunc(4.5782));
    printf("Amount = %.0f \n ", trunc(A));
    printf("Compound Intrest = %.0f", CI);
    
    return 0;
}