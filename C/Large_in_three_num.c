#include <stdio.h>

int main() {
    // Find the largest of three numbers
    int a = 10 ,b = 14 ,c = 27;
    printf("greater number is : ");
    if(a > b && a > c) printf("%d",a);
    else if(b > a && b > c) printf("%d",b);
    else printf("%d",c);
    return 0;
}