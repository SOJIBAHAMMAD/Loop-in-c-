#include<stdio.h>
int main () {
    int n;
    printf("Enter number of row :");
    scanf("%d", &n);
    int nsp=n-1;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=nsp;j++) {
            printf(" ");
        }
        nsp=nsp-1;
        int b=65;
        char ch = (char)b;
        for(int k=1;k<=i;k++) {
            printf("%c", ch);
            ch++;
        }
        int a=i-1;
        for(int l=1;l<=i-1;l++) {
            char ch =(char)(a+64);
            printf("%c", ch);
            a--;
        }
        printf("\n");
    }
    return 0;
}