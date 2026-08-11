#include <stdio.h>

int main() {
    // Sum of prime digits
    int n,reminder,sum = 0,isPrime;
    printf("Enter a  number : ");
    scanf("%d",&n);
    
    while(n>0){
        reminder = n % 10;
        isPrime = 1;
        if(reminder <2){
            isPrime = 0;
        }else{
            for(int i=2;i<=reminder/2 ;i++){
                if(reminder % i == 0){
                    isPrime = 0;
                    break;
                }
            }
        }
        if(isPrime){
            sum = sum + reminder;
        }
        n = n / 10;
    }
    printf("sum of digit is %d",sum);
    
    return 0;
}