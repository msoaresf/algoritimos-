#include <stdio.h>
#include<conio.h>

main(){

  int num, soma, contador;

contador=0;  soma=0;

while(contador<3){

    printf("digite 1 numero: ");
    scanf("%d",&num);

    soma=soma+num;
    contador=contador+1;


    }
printf("a soma e %d",soma);

}
