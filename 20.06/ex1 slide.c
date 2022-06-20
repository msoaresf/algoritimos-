#include<conio.h>
#include<stdio.h>
main(){

 char nome;
 float a, b, m;
 int cont;

 cont=0;

 do{


    printf("\nentre com a primeira nota: ");
    scanf("%f",&a);

    printf("\n entre com a segunda nota: ");
    scanf("%f",&b);

    m=(a+b)/2;

    printf("\n a media do aluno e %f",m);

    cont=cont+1;

 } while(cont<5);







}
