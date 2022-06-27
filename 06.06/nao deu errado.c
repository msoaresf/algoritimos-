#include <stdio.h>
#include<conio.h>

main(){

 float a, b, r;
 int contador;

contador=1;


while(contador<=5){

    printf("entre com duas variaveis: ");
    scanf("%f",&a);
    scanf("%f",&b);

    r=a+b;
    contador=contador+1;


    }
printf("o valor de r: %f",r);


}
