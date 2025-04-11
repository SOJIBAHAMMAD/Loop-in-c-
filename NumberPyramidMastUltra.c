#include<stdio.h>
int main () {
    int n;
    printf("Enter number of lines :");
    scanf("%d", &n);

    int nsp=1;
    int nd=n;
    for(int i=1;i<=2*n+1;i++) {
        printf("%d", i);
    }
    printf("\n");
    for(int j=1;j<=n;j++) {
        int a=1;
        for(int k=1;k<=nd;k++) {
            printf("%d", a);
            a++;
        }
        for(int l=1;l<=nsp;l++) {
            printf(" ");
            a++;
        }
        for(int m=1;m<=nd;m++) {
            printf("%d", a);
            a++;
        }
        nsp+=2;
        nd--;
        printf("\n");
    }
    return 0;
}