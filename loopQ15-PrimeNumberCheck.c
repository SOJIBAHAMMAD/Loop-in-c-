#include<stdio.h>
#include<stdbool.h>
int main () {
    int n;
    printf("Enter an integer :");
    scanf("%d",&n);
    bool flag=true;
    for(int i=2;i<=n-1;i++) {
        if(n%i==0) {
            flag=false;
            break;
        }
    }
    if(flag==true) {
        printf("Given number is a prime number");
    } else {
        printf("Given number is not a prime number");
    }
    return 0;
}