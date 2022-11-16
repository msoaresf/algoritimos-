#include <stdio.h>
main(){

float *ptr;
float *ptr2;
float var;

printf("Digite uma variavel:\n");
scanf("%f",&var);

ptr=&var;
ptr2=&ptr;

printf("Resultado:%f",*ptr);

}
