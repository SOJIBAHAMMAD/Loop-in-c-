#include<stdio.h>
int main () {
    int n,m;
    printf("Enter row and columns number :");
    scanf("%d %d", &n,&m);

    for(int i=1;i<=n;i++) {
        for(int i=1;i<=m;i++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}