#include<math.h>
#include<conio.h>
#include<stdio.h>

main(){
 int pp,pt,op;

 printf("entre com um peso na terra: ");
 scanf("%d",&pt);

 printf("digite 1 para mercurio:\n" );

 printf("digite 2 para venus:\n" );

 printf("digite 3 para marte:\n" );

 printf("digite 4 para jupter:\n" );

 printf("digite 5 para saturno:\n" );

 printf("digite 6 para urano:\n" );

 scanf("%d",&op);
 switch(op){
 case 1:
     pp=(pt/10)*0.37;
     break;

 case 2:
    pp=(pt/10)+0.88;
    break;

 case 3:
    pp=(pt/10)*0.38;
    break;

 case 4:
    pp=(pt/10)*2.64;
    break;
 case 5:
    pp=(pt/10)*1.15;
    break;

 case 6:
    pp=(pt/10)*1.17;
    break;
    }
    printf("seu peso no planeta e: %d",pp);

}
