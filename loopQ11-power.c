#include<stdio.h>
int main () {
    int a,b;
    printf("Enter base and exponent number :");
    scanf("%d %d", &a,&b);
    int power=1;
    for(int i=1;i<=b;i++) {
        power=power*a;
    }
    printf("%d raised to the power %d is %d", a,b,power);
    return 0;
}