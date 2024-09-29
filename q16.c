/*
A B C D E
  B C D E
    C D E
      D E
        E
*/

#include<stdio.h>

int main(){
    for(char i='A';i<='E';i++){ 
        for(char s='A';s<i;s++){
            printf(" ");
        }
        for(char j=i;j<='E';j++){
            printf("%c",j);
        }
        printf("\n");
    }
}