#include<stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(){

struct data{
int dia;
char mes;
int ano;

};

struct pessoa{
char nome[20];
char telefone[20];
char endereco[20];
 struct data nascimento;

};

struct pessoa p1;

strcpy(p1.nome,"duda");

strcpy(p1.telefone,"214234");

strcpy(p1.endereco,"rua blablabla");

p1.nascimento.dia=15;
strcpy(p1.nascimento.mes,"agosto");

p1.nascimento.ano=2006;



}
