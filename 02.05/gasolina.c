#include<stdio.h>
main()
{
 int preco,litro,x;

 printf("insira o valor do litro: ");

 scanf("%d",&litro);

 printf("quantos litros deseja abastecer: ");

 scanf("%d",&preco);

 x = preco/litro;
printf("voce abasteceu % litros de gasolina",x);

}
