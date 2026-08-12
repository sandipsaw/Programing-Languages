#include <stdio.h>

int main() {
    // Hollow Traingle
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if( j==1 || i==5 || i==j){
                printf("* ");
            }else{
                printf("  ");
            }
            
        }
        printf("\n");
    }
    return 0;
}