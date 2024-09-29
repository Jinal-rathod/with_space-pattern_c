/*
A B C D E
  A B C D 
    A B C
      A B
        A
*/

#include<stdio.h>

int main(){
    for(char i='E';i>='A';i--){ 
        for(char s='E';s>i;s--){
            printf(" ");
        }
        for(char j='A';j<=i;j++){
            printf("%c",j);
        }
        printf("\n");
    }
}