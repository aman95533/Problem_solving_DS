#include<stdio.h>
int main() {
    printf("Checking Leap year");
    int year;
    printf("\nEnter year to be checked:\n");
    scanf("%d",&year);
    if(year%400==0)
        printf("%d id leap year",year);
    else if(year%100==0)
        printf("%d is not leap year",year);
    else if (year%4==0)
        printf("%d is a leap year",year);
    else
        printf("%d is not a leap year",year);

    return 0;

}