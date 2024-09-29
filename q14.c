/*      A
      A B
    A B C
  A B C D
A B C D E
*/

#include<stdio.h>

int main(){
    for(char i='A';i<='E';i++){ 
        for(char s='E';s>i;s--){
            printf(" ");
        }
        for(char j='A';j<=i;j++){
            printf("%c",j);
        }
        printf("\n");
    }
}