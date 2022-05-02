#include<math.h>
#include<stdio.h>
#include<conio.h>
main()
{
   int a, raiz, quadrado;

   printf("entre com um numero: ");
   scanf("%d",&a);

   if(a>0){
    raiz = sqrt(a);
    printf("%d",raiz);

   }
   else{

        quadrado = pow(a,2);
        printf("%d",quadrado);


   }
}
