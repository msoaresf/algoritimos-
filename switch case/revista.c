#include<math.h>
#include<conio.h>
#include<stdio.h>

main(){
 int x, y;

 printf("codigos disponiveis:\n");


 printf("101 \n");

 printf("102 \n");

 printf("103 \n");

 printf("104 \n");

 printf("105 \n\n");

 printf("codigo da sua revista: ");




 scanf("%d",&y);

 printf("\n nome e valor de sua revista: ");
 switch(y){
 case 101:
     printf("veja - R$297.00");
     break;

 case 102:
    printf("Exame - R$189.00");
    break;

 case 103:
    printf(" Info - R$107.00");
    break;

 case 104:
    printf("Colecao info - R$139.86");
    break;
 case 105:
  printf("Voce s/a - R$90.00");
    break;
 }




}
