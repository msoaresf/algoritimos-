#include<math.h>
#include<conio.h>
#include<stdio.h>

main(){
 int n,nv;

 printf("seu nivel:\n ");


 printf("digite 1 para descoberto:\n" );

 printf("digite 2 para padawan:\n" );

 printf("digite 3 para cavaleiro jedi:\n" );

 printf("digite 4 para mestre jedi:\n" );


 scanf("%d",&nv);

 switch(nv){

 case 1:
     printf("descoberto");

     break;

 case 2:
     printf("padawan");

    break;

 case 3:
     printf("cavaleiro jedi");

    break;

 case 4:
   printf("mestre jedi");

    break;

    }


}
