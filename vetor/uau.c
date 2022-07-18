#include <conio.h>
#include <stdio.h>
#include <math.h>

main(){

 float v[10];
 int c;

 for (c=0;c<10;c++){

    printf("\nEntre com os numeros: ");
    scanf("%f",&v[c]);

    if(c%2==0){

        printf("\nO numero na posicao par: %f",v[c]);
    }

 }



  }
