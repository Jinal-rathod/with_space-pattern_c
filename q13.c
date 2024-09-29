/*      A
      B A
    C B A
  D C B A
E D C B A
*/

#include<stdio.h>

int main(){
    for(char i='A';i<='E';i++){ 
        for(char s='E';s>i;s--){
            printf(" ");
        }
        for(char j=i;j>='A';j--){
            printf("%c",j);
        }
        printf("\n");
    }
}