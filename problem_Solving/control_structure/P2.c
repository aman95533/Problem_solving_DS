#include<stdio.h>
int main() {

    int a,b,c;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("\nEnter second  number :");
    scanf("%d",&b);
    printf("\nEnter Third  number :");
    scanf("%d",&c);
    if (a>b && a>c) {
        printf("\n%d is grater",a);
    }
    else if (b>a && b>c) {
        printf("\n%d is grater",b);
    }
    else {
        printf("\n%d is grater",c);
    }
    return 0;
}