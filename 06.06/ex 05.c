#include <stdio.h>
#include<conio.h>

main(){

int a=5000000, b=7000000;
float na,nb;
int anos=0;

while(b>a)
{
    na = a *0.03;

    nb = b * 0.02;

    a = a + na;

    b = b + nb;

    anos = anos +1;


}
printf("\n em  %d :anos o pais A passara o pais B",anos);




}
