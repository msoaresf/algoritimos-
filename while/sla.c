#include <stdio.h>
#include<conio.h>


main(){

 int superior, num, soma;

 soma=0;

 printf("entre com um numero: ");
 scanf("%d",&num);

 printf("entre com o limite superior: ");
 scanf("%d",&superior);



while (num<=superior){

    if(num%2==1)
      soma=soma+num;
      num=num+1;


}


    printf("somatorio %d",soma);
 }
