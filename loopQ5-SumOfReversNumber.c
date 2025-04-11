#include<stdio.h>
int main () {
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    int sum;
    int lastDigit=0;
    int revers=0;
    int originalNumber=n;

    while(n!=0) {
        lastDigit=n%10;
        revers=revers*10;
        revers=revers+lastDigit;
        n=n/10;
    }
    sum=originalNumber+revers;
    printf("Revers of given number is %d \n", revers);
    printf("Sum of revers number & given number is %d \n",sum);
    return 0;
    }