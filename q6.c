/*      5
      4 4
    3 3 3
  2 2 2 2
1 1 1 1 1
*/

#include<stdio.h>

int main(){
    for(int i=5;i>=1;i--){ 
        for(int s=1;s<i;s++){
            printf(" ");
        }for(int j=5;j>=i;j--){
            printf("%d",i);
        }
        printf("\n");
    }
}