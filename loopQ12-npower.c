#include<stdio.h>
int main () {
    int a,n;
    printf("Enter base & exponent number :");
    scanf("%d %d", &a,&n);
    int power=1;
    for(int i=1;i<=n;i++) {
        power=power*a;
        printf("%d Raise to the power %d is %d\n", a,i,power);
    }
    return 0;
}