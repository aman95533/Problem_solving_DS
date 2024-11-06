#include<stdio.h>
int sal(int basic, char grd) {
    int total,hra ,da,pf,allow;
    hra=0.2*basic;
    da=0.5*basic;
    pf=0.11*basic;
    if(grd=='A'){
        allow=1700;
    }
    else if(grd=='B') {
        allow=1500;
    }
    else {
        allow=1300;
    }
    total=basic+hra+da+allow-pf;
    return total;
}
int main() {
    int b_sal;
    char grade;
    printf("Enter Salary[basic]: ");
    scanf("%d",&b_sal);
    printf("\nEnter your Grade: ");
    scanf("%c",&grade);
    scanf("%c",&grade);printf("\nYour Salary is %d",sal(b_sal,grade));

return 0;

}