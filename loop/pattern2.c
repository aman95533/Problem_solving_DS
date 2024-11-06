#include<stdint.h>
int main(){
    int N=4;
    for(int i=1;i<=N;i++){
            int k=i;
        for(int j=0;j<i;j++){
            printf("%d",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}