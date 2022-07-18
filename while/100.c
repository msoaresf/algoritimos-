#include <stdio.h>
#include<conio.h>

main(){

    int contador;
    float valor, soma, media;

       contador=0;
       soma=0;

 while(contador<100){

    printf("entre com um valor: ");
    scanf("%f",&valor);

    soma=soma+valor;


    contador=contador+1;

}

   media=soma/contador;


 printf("a soma é %f",soma);
 printf("a media é %f",media);








}
