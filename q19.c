/*
1 0 1 0 1
  0 1 0 1
    1 0 1 
      0 1
        1
*/

#include<stdio.h>

int main(){
    for(int i=1;i<=5;i++){ 
        for(int s=1;s<i;s++){
            printf(" ");
        }
        for(int j=i;j<=5;j++){
            printf("%d",j%2);
        }
        printf("\n");
    }
}