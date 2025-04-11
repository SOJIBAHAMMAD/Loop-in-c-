#include<stdio.h>
int main () {
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    int revers=0;
    int lastNumber=0;

    while(n!=0) {
        lastNumber=n%10;
        revers=revers*10;
        revers = revers + lastNumber;
        n=n/10;
    }
    printf("The revers digit of given number is %d", revers);
    return 0;
}
