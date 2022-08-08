#include <conio.h>
#include <stdio.h>
#include <math.h>

main(){


  int i,j, maior=0;
  float div[2][2],a[2][2];

  for(i=0;i<2;i++)
    for(j=0;j<2;j++){

     printf("entre com os elementos da matriz A:\n");
     scanf("%f", &a[i][j]);

     }

  for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    {
   if(i==j){

    if(a[i][j]>maior)
    maior=a[i][j];

   }
    }
      for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    {
      div[i][j]=a[i][j]/maior;
    }
      for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    {
        printf("\n Matriz A; %f",a[i][j]);
        printf("\n Matriz A; %f",div [i][j]);

    }

}
