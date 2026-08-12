#include <stdio.h>

int main() {
    //  Right-Angled Triangle
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=1; j<=i ; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}