// #include<stdio.h>
// int main () {
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++) {
//         for(int j=1;j<=n-i;j++) {
//             printf("  ");
//         }
//         int a=65;
//         char ch=(char)a;
//         for(int k=1;k<=i;k++) {
//             printf("%c ",ch);
//             ch++;
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include<stdio.h>
struct student {
    char name[20];
    int id;
    double cgpa;
};
int main () {
    struct student jahid;
    scanf("%s",&jahid.name);
    scanf("%d",&jahid.id);
    scanf("%lf",&jahid.cgpa);
    printf("%s\n",jahid.name);
    printf("%d\n",jahid.id);
    printf("%lf\n",jahid.cgpa);
    return 0;
}