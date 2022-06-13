#include <stdio.h>
#include<conio.h>

main(){


 int soma, cont, cont2, cont3, cont4, idade,p,media;
 float altura, peso;

 while(cont<25)
 {
     printf("\n entre com a idade: ");
     scanf("%d",&idade);

     printf("entre com a altura: ");
     scanf("%f",&altura);

     printf("entre com o peso: ");
     scanf("%f",&peso);

     if (idade<50)
        cont2=cont2+1;

     if ((idade>10)&&(idade<20))
{

    soma=soma+altura;
    cont3=cont3+1;
}
if(peso<40)
{
    cont4=cont4+1;
    p=cont4/25;
}
 }
 media=soma/cont3;
 p=cont4/25;

 printf("\n a quntidade de pessoas com idade superior a 50 anos é:%d", cont2);
 printf("\n a media das alturas:%f",media);
 printf("\n a porcentagem de pessoas com peso inferior a 40 quilos:%f",p);
}
