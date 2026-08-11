#include <stdio.h>

int main() {
    // A strong number (also called a Krishnamurthy number) is a positive number where the sum of the factorials of its individual digits equals the number itself. For example, 145 is a strong number because 1! + 4! + 5! = 1 + 24 + 120 = 145
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    int copy = n ,sum = 0;
    while(n!=0){
        int rem = n % 10 ;
        int fact =1;
        for(int i=1;i<=rem;i++){
            fact *= i;
        }
        sum += fact;
        n /= 10;
    }
    printf("sum = %d \n",sum);
    if(sum == copy) printf("%d is a strong number",copy);
    else printf("%d is not a strong number",copy);
    return 0;
}