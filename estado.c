#include<stdio.h>
#include<conio.h>
main()
{
    char p;

     printf("sigla do seu estado: ");
     scanf("%c",&p);

     if(p=='r'){
        printf("carioca");

     }
     else if(p=='s'){
        printf("paulista");
     }
     else if(p=='m'){
        printf("mineiro");
     }
     else{
        printf("outros estados");
     }
}
