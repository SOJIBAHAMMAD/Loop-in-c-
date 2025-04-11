#include<stdio.h>
int main () {
    int n;
    printf("Enter number of row :");
    scanf("%d", &n);

    // for(int i=1;i<=n;i++) {
    //     for(int j=1;j<=n-i;j++) {
    //         printf(" ");
    //     }
    //     for(int k=1;k<=2*i-1;k++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // another way
    int nsp=3;
    int nst=1;

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=nsp;j++) {
            printf(" ");
        }
        nsp=nsp-1;
        for(int k=1;k<=nst;k++) {
            printf("*");
        }
        nst=nst+2;
        printf("\n");
    }
    return 0;
}