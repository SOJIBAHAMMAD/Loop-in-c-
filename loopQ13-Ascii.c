#include<stdio.h>
int main () {
    int i=65;
    while(i<=90) {
        char ch=(char)i;
        printf("%c => ",ch);
        printf("%d\n",i);
        i++;
    }
    return 0;
}