#include <stdio.h>
#include <math.h>
#include <conio.h>

main(){

 float bonus, salario, tempo;

 printf("A quanto tempo voce trabalha na empresa? ");
 scanf("%f",&tempo);

 printf("Qual o seu salario trabalhando na empresa? ");
 scanf("%f",&salario);


 if(tempo>=5){

    bonus=0.20*salario;

    printf("seu bonus e de %f",bonus);

 }else
 if(tempo<5){

    bonus=0.10*salario;

    printf("\nseu bonus e de %f",bonus);
 }









 getch();




}
