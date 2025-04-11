#include<stdio.h>
int main () {
    int n;
    printf("Enter a number :");
    scanf("%d", &n);

    int revers=0;
    int LastDigit;
    while(n>0) {
        LastDigit=n%10;
        revers=revers*10;
        revers=revers+LastDigit;
        n=n/10;
    }
    printf("The revers number is %d", revers);
    return 0;
}
