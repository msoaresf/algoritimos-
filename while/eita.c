#include <stdio.h>
#include<conio.h>


float a,b,P;
char resp;
main(){

resp= 's';


while (resp == 's') {

    printf("Entre com A:\n");
    scanf("%f",&a);

    printf("Entre com B: \n");
    scanf("%f",&b);

   P = a-b;

    printf("O valor de P: %f",P);
    printf("\n\nDeseja continuar S/N?: ");

    scanf("\n%c",&resp);
}
}
