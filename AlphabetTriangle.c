#include<stdio.h>
int main () {
    int n;
    printf("Enter number of row :");
    scanf("%d", &n);

    for(int i=1;i<=n;i++) {
        int a=65;
        char ch = (char)a;
        for(int j=1;j<=n+1-i;j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}