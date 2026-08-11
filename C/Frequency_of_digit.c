#include <stdio.h>

int main() {
    // Find the frequency of a digit
    int n, digit,reminder,frequency = 0;
    printf("Enter a  number : ");
    scanf("%d",&n);
    printf("Enter digit to find its frequency : ");
    scanf("%d",&digit);
    
    while(n>0){
        reminder = n % 10;
        if(digit == reminder){
            frequency++;
        }
        n = n / 10;
    }
    printf("frequency of digit is %d",frequency);
    
    return 0;
}