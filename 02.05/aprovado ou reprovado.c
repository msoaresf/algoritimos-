#include<stdio.h>
#include<conio.h>
main()
{
    float m, f;

    printf("insira a nota e o numero de faltas: ");
    scanf("%f",&m);
    scanf("%f",&f);

    if(m>7 && f<20){
        printf("aprovado");
    }

  else {
    printf ("reprovado");
  }

}
