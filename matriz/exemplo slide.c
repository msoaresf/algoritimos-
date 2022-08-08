#include <conio.h>
#include <stdio.h>
#include <math.h>

main(){


  int i,j, v[3][3];


  for(i=0;i<3;i++)
    for(j=0;j<3;j++){

     printf("entre com os elementos da matriz:\n");
     scanf("%d", &v[i][j]);


  }

  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        printf("\nos elementos da matriz: %d", v[i][j]);
    }






}
