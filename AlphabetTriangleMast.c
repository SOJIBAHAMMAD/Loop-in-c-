#include<stdio.h>
int main () {
    int n;
    printf("Enter number of row :");
    scanf("%d", &n);

    for (int i=1;i<=n;i++) {
        for(int j=1;j<=n-i;j++) {
            printf(" ");
        }
            int a=65;
            char ch = (char)a;
            for(int k=1;k<=i;k++) {
                printf("%c", ch);
                ch++;
            }
        printf("\n");
    }
    return 0;
}