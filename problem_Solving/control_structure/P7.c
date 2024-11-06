#include<stdio.h>
int main(){
    int t;
    printf("\nEnter temprature in centigrade[C] :");
    scanf("%d",&t);

    if (t<0) {
        printf("Freezing weather");
    }
    else if (t>=0 && t<10) {
        printf("Very Cold weather");
    }
    else if (t>=10 && t<20) {
        printf("Cold weather");
    }
    else if (t>=20 && t<30) {
        printf("Normal weather");
    }
    else if (t>=20 && t<30) {
        printf("Its Hot");
    }
    else
        printf("Its very Hot");
    return 0;
}