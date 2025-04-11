#include<stdio.h>
int main () {
    int a,b,c;
    int armstrong=1;
    int sum;
    for(int i=1;i<=500;i++) {
    sum=a*a*a+b*b*b+c*c*c;
    armstrong=armstrong+sum;
        printf("The armstrong number is %d\n", armstrong);
    }
    return 0;
}