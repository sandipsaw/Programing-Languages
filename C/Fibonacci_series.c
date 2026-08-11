#include <stdio.h>

int main() {
    // Fibonacci Series - The Fibonacci sequence is a famous set of numbers where each number is the sum of the two numbers before it. It usually starts with 0 and 1, creating the pattern: 0, 1, 1, 2, 3, 5, 8, 13, 21, and so
    int first = 0 , second = 1, n, sum = 0;
    printf("Enter the range of fibonaci series :");
    scanf("%d",&n);
    printf("%d ",first);
    printf("%d ",second);
    for(int i=1;i<=n-2;i++){
        sum = first + second;
        printf("%d ",sum);
        first = second;
        second = sum ;
    }

    return 0;
}