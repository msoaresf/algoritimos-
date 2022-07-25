#include <conio.h>
#include <stdio.h>
#include <math.h>
#include<stdlib.h>
main(){

 int num[15],media,soma=0,i;

 for(i=0;i<15;i++)
 {
     printf("\n Entre com o numero: ");
     scanf("%d",&num[i]);


 }



    for(i=0;i<15;i++){

       if(0==num[i]%2){

         printf("\nNumeros par:%d",num[i]);
} else

printf("\nNumeros impar:%d",num[i]);

}

}
