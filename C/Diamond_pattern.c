#include <stdio.h>

int main() {
    // Diamond Pattern
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    for(int i=1;i<=2*n-1;i++){
        if(i<=n){
            for(int j=1;j<=n-i;j++){
                printf("  ");
            }
            for(int k=1;k<=2*i-1;k++){
                printf("* ");
            }
        }else{
            for(int j=1;j<=i-n;j++){
                printf("  ");
            }
            int val = (2*n)-((2*(i-n))+1);
            for(int k=1;k<=val;k++){
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}