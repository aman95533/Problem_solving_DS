#include<stdio.h>
int main(){

  for(int i=1;i<=4;i++){
      int k=i;
      for (int j=1;j<i+1;j++)
      {
        printf("%d ",k);
          k++;
      }
      printf("\n");
  }
  return 0;
}