#include<math.h>
#include<conio.h>
#include<stdio.h>

main(){

 int num, x;
float cubo,raiz;

 for(x=0; x<=4;x++){


    printf("\nentre com um numero: ");
    scanf("%d",&num);

    cubo=pow(num,3);

    raiz=pow(num,0.3333333333333333333333333333);

    printf("\nO cubo e: %f",cubo);
    printf("\nA raiz e: %f",raiz);


 }



}
