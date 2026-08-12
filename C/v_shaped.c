#include <stdio.h>

int main() {
    // v shaped
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j =1; j<=n*2-1; j++){
            if(i == j || i+j == n*2){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}