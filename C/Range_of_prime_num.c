#include <stdio.h>

int main() {
    // Print Prime Numbers in a Range
    int start,end;
    printf("Enter staring Number : ");
    scanf("%d",&start);
    
    printf("Enter ending Number : ");
    scanf("%d",&end);
    
    printf("Prime number between %d and %d are :",start, end);
    
    for(int n = start; n<=end; n++){
        int isPrime = 1;
        if(n<=1){
            isPrime = 0;
        }else{
            for(int i=2;i*i<=n;i++){
                if(n%i == 0){
                    isPrime = 0;
                    break;
                }
            }
        }
    if(isPrime) printf("%d ",n);
    }
    return 0;
}