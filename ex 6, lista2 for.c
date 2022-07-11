#include<math.h>
#include<conio.h>
#include<stdio.h>

main(){

char nome;
int idade, sexo,x;

 for(x=0; x<=10; x++){
printf("\nentre com o nome: ");
scanf("\n%c",&nome);
printf("\nentre com a idade: ");
scanf("%d",&idade);
printf("\nhomem-1");
printf("\nmulher-2");
printf("\nentre com o sexo: ");
scanf("%d",&sexo);

if((sexo==1)&&(idade>21)){

    printf("\nEsse e seu nomeeeeee: %c",nome);
}
 }




}
