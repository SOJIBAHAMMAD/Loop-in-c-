#include<stdio.h>
int main () {
    int n;
    printf("Enter number of lines :");
    scanf("%d", &n);

    int nsp=1;
    int na=n;
    int x=65;
    char ch = (char)x;
    for(int i=1;i<=2*n+1;i++) {
        printf("%c", ch);
        ch++;
    }
    printf("\n");
    for(int j=1;j<=n;j++) {
        int x=65;
        char ch = (char)x;
        for(int k=1;k<=na;k++) {
            printf("%c", ch);
            ch++;
        }
        for(int l=1;l<=nsp;l++) {
            printf(" ");
            ch++;
        }
        for(int m=1;m<=na;m++) {
            printf("%c", ch);
            ch++;
        }
        nsp+=2;
        na--;
        printf("\n");
    }
    return 0;
}