/*
1 1 1 1 1
  0 0 0 0
    1 1 1
      0 0
        1
*/

#include<stdio.h>

int main(){
    for(int i=5;i>=1;i--){ 
        for(int s=5;s>i;s--){
            printf(" ");
        }
        for(int j=i;j>=1;j--){
            printf("%d",i%2);
        }
        printf("\n");
    }
}