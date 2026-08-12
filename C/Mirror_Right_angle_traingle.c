#include <stdio.h>

int main() {
    // Mirror_Right_angle_traingle
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=1; j<=n-i ; j++){
            printf("_ ");
        }
        for(int k=1; k<=i ; k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}