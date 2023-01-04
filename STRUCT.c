#include<stdio.h>
#include <stdlib.h>
#include <conio.h>

struct entrada{

 char nome[20];
 char snome[20];
 char fone[10];
};

struct entrada lista[2];

int i;

main(){

for(i=0;i<2;i++){

printf("\ndigite o nome: ");
scanf("%s", lista[i].nome);

printf("\ndigite o sobrenome: ");
scanf("%s", lista[i].snome);

printf("\ndigite o telefone: ");
scanf("%s", lista[i].fone);
}
for(i=0;i<2;i++){

printf("Nome %s %s", lista[i].nome,lista[i].snome);
printf("\t\t Fone %s\n",lista[i].fone);

}
getch();
}

