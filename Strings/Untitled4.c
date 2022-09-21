#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>

int main(){

  char str1[100], str2[100], str3[100];

  printf("Entre com um string");
  gets(str1);
  strcpy(str2,str1);
  strcpy(str3,"voce digitou um string");

  printf("\n\n %s %s",str3,str2);




}
