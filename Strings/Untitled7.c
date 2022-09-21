#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){

  char str1[100], str2[100];

  printf("Entre com um string:\n");
  gets(str1);
   printf("Entre com o segundo string:\n");
    gets(str2);


    if(strcmp(str1,str2))

        printf("\nAs duas strings sao diferentes");

else
    printf("\nAs duas strings dao iguais");



}
