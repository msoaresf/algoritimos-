#include <conio.h>
#include <stdio.h>

main(){

  int i, soma=0;
  float n;

  printf("Leia a condicao de parada: ");
  scanf("%f",&n);


  for(i=3; i<=n; i++){

      soma=soma+(5*i+2);

  }

  printf("a soma e: %d",soma);







}
