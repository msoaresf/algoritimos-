#include <conio.h>
#include <stdio.h>
#include <math.h>

main(){

 int v[5],media,soma=0,i;

 for(i=0;i<5;i++)
 {
     printf("\n Entre com os elementos: ");
     scanf("%d",&v[i]);
     soma=soma+v[i];

 }

    media=soma/5;

    for(i=0;i<5;i++){

       if(v[i]>media){

         printf("\nNumero acima da media:%d",v[i]);
}

}

}
