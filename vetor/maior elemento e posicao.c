#include <conio.h>
#include <stdio.h>
#include <math.h>

main(){

 int A[5], maior=0,x;
 int c;

 for (c=0;c<5;c++){

    printf("\nEntre com o elemento: ");
    scanf("%d",&A[c]);

    if(A[c]>maior){

       maior=A[c];
       x=c;
    }

 }
 printf("\n O maior elemento:%d",maior);
 printf("\n Esta na posicao:%d",x);


  }
