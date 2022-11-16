#include<stdio.h>
#include<conio.h>

int functionfactorial(int num){

}
void main(){

    int num, fatorial;

    printf("entre com o numero que quer saber o fatorial:");
    scanf("%d",&num);

    fatorial=cauculafatorial(num);

    printf("fatorial %d",fatorial);

    getch();

}
int cauculafatorial(int x){

int cont, fat;

fat=1;

for(cont=1; cont<=x;cont++)
    fat=fat*cont;
    return(fat);
}
