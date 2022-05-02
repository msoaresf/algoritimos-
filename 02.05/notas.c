#include<stdio.h>
#include<conio.h>
main()
{
    int  a,b, m;

    printf("insira as duas notas: ");
    scanf("%d",&a);
    scanf("%d",&b);

    m =((a*2)+(b*3))/5;

if(m>=6){
        printf("aprovado");
}

else if(6>m && m>2){
    printf("recuperacao");
}
else{
    printf("reprovado");
}


}
