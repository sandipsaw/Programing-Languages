#include <stdio.h>

int main() {
    // lcm of  two number
    int a,b;
    printf("Enter two Number : ");
    scanf("%d %d",&a, &b);
    int c1 = a , c2 = b, reminder,gcd,lcm;
    while (b!=0){
        reminder = a%b;
        a = b;
        b = reminder;
    }
    gcd = a;
    printf("gcd = %d \n",gcd);
    lcm = (c1*c2)/gcd;
    printf("lcm of %d and %d is %d",c1,c2,lcm);
    return 0;
}